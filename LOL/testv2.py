import requests
import json
from urllib.parse import quote
import pandas as pd
import numpy as np
from collections import defaultdict
from itertools import permutations
import configparser

config = configparser.ConfigParser()

# Riot Games API Key
config.read('../../lolAPI.cfg')

api_key = config['DEFAULT']['API_KEY']
count = config['DEFAULT']['count']
url_match_template = config['URL']['url_match_template']

# formatting url

url_match = url_match_template.format(count=count, API_KEY=api_key)


MATCH_INFO = requests.get(url_match)
MATCH_INFO_json = MATCH_INFO.json()

# QueueId 440 5v5 Ranked Flex games

# generate_all_team(puuids)
def generate_all_teams(puuids):
	return [list(zip(puuids,p)) for p in permutations(positions, len(puuids))] # permutations method is nPr that is listing all possible tuple. tuple is unchangable unlike list.

# Call API 
def get_match_info(MATCH_INFO):
		url = f'https://asia.api.riotgames.com/lol/match/v5/matches/{MATCH_INFO}?api_key={api_key}'
#print(url)
		response = requests.get(url)
		return response.json()

# matching team config # Sort vs Sorted as Org_list vs new_list  What is sorting? is ordering in a rule like ascending.
def is_same_team(team1, team2):
	team1_sorted = sorted([(t[0],t[1]) for t in team1], key=lambda x: (x[0], x[1])) # lamda is anonymous function like inline func? yes, But only THIS LINE.
	team2_sorted = sorted([(t[0],t[1]) for t in team2], key=lambda x: (x[0], x[1])) # Just use Keyword <key> = <args> : <expr> and you get
	return team1_sorted == team2_sorted

SH = 'W8-6sZMcznaWCUle6aQ0vUxRPDNnILPIlJHejvHjbAsKmE8VDEUiGbhdDHt_7hSw2spsX2uUa56x3Q'	#SH
JH = 'he8N_27baLzhpe_WF_9uMbPOeoM1Kg7Rip8C4ye_UmBcFf_e50UDahKmqTC71QJG18sFjyArLI5eaA'	#JH   
MH = 'MkL5TyqAsgRDAS7EfODpyXUUi_IaiNobOPTm_zSQj2mE-kfwdE5A0E4loyiO27Kiq9i7IuQucsZQzQ'	#MH
DH = 'No36tHMuK88uHGvmSA23e0Iz7W6MqA-FAQ4snTp52z7s7STLeMgHf74PTU-QnmOA5mpeaFDE0wCfsQ'	#DH

our_team = {SH : 'SH', JH : 'JH', MH : 'MH', DH : 'DH'} # puuid : 'value' is key mapping , Name Mapping by dictionary
positions = ['TOP', 'JUNGLE', 'MIDDLE', 'BOTTOM', 'UTILITY']

all_possible_teams = generate_all_teams(list(our_team.keys()))
#print(all_possible_teams)

match_sum_list = []
position_puuid_count=defaultdict(int) # func defaultdict is defaultdict(<class 'int'>, {'key1': 0(default), 'key2': init_val}) 

for MATCH_INFO in MATCH_INFO_json:
	data = get_match_info(MATCH_INFO);
	puuid_team_Position = [(participant['puuid'], participant['teamPosition'], participant['win']) for participant in data['info']['participants']] # get total data
	our_team_data = [(puuid, teamPosition, win) for puuid, teamPosition, win in puuid_team_Position if puuid in our_team] # select valid data
	match_sum_list.append(our_team_data)

	for puuid, Position, _ in our_team_data:
		position_puuid_count[(Position, puuid)] += 1	

grouped_matches = {}  # same team_position is to be team_key.
for team in all_possible_teams:
	matching_matches = []
	for matches_info in match_sum_list:
		if is_same_team(team, matches_info): #Check Same team.
			matching_matches.append(matches_info) # recored match team data for 100 games.

	team_key = tuple(sorted([(t[0], t[1]) for t in team], key=lambda x: (x[0], x[1]))) # Set Key of sorted (puuid, teamPosition)
	if team_key not in grouped_matches: #like ifndef... 
		grouped_matches[team_key] = []  #initial cause it is not match real game match.
	grouped_matches[team_key].extend(matching_matches) # Put everything else to grouped_matches

"""
for team, matches in grouped_matches.items():
	print(f"Team_COM: {team}")
	for match_result in matches:
		print(match_result)

df_list = []
for team, matches in grouped_matches.items():
	for match_df in matches:
		df_list.append(pd.DataFrame(match_df, columns = ['puuid', 'position', 'win']))

print(df_list)
"""

# 승리/패배 비율 계산
win_ratios = {}

for team, matches in grouped_matches.items():
	total_matches = len(matches)
	win_count = sum([1 for match in matches for _, _, win in match if win]) # _ , _ is ignore only use 'win' -> if win means only count +1 in win = True
	win_ratios[team] = ((win_count/4) / total_matches, total_matches) if total_matches > 0 else (0, 0)

# 결과 출력
total_our_team_matches = sum([total_matches for _, total_matches in win_ratios.values()])

print(f"Total matches including our_team: {total_our_team_matches}")

for team, (win_ratio, total_matches) in win_ratios.items(): # team is key tuple, value is match list
	team_names = [(our_team.get(puuid,puuid), position) for puuid, position in team]
	print(f"Team: {team_names} -> Win Ratio : {win_ratio:.3f}, Total matches: {total_matches}")

																 
# 가장 높은 승률을 가진 팀 찾기
best_team = max(win_ratios, key=lambda team: (win_ratios[team][0], win_ratios[team][1]))
best_win_ratio, best_total_matches = win_ratios[best_team]

best_team_names = [(our_team.get(puuid, puuid), position) for puuid, position in best_team]
print(f"\nBest Team: {best_team_names} -> Win Ratio: {best_win_ratio:.2f}, Total Matchse : {best_total_matches}")

print("Matching counts of positions and puuids in matches:")
for (position, puuid), count in position_puuid_count.items():
	print(f"Position: {position}, puuid: {our_team.get(puuid,puuid)}, Count: {count}")
"""
# DataFrame으로 변환
df_list = []
for team, matches in grouped_matches.items():
    for match_df in matches:
        df_list.append(pd.DataFrame(match_df, columns=['puuid', 'position', 'win']))

# 각 매치 출력
for df in df_list:
    print(df)
"""

