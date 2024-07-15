import requests
import json
from urllib.parse import quote
import pandas as pd
import numpy as np
from collections import defaultdict

# Riot Games API Key
API_KEY = 'RGAPI-4b4edeb5-b496-4891-be64-0538f6aaa5f1'  # 발급받은 API Key를 입력하세요 limit 10hours in a day.
count=10

url_match = f'https://asia.api.riotgames.com/lol/match/v5/matches/by-puuid/No36tHMuK88uHGvmSA23e0Iz7W6MqA-FAQ4snTp52z7s7STLeMgHf74PTU-QnmOA5mpeaFDE0wCfsQ/ids?queue=440&type=ranked&start=0&count={count}&api_key={API_KEY}'

MATCH_INFO = requests.get(url_match)
MATCH_INFO_json = MATCH_INFO.json()

# QueueId 440 5v5 Ranked Flex games

# Call API 
def get_match_info(MATCH_INFO):
		url = f'https://asia.api.riotgames.com/lol/match/v5/matches/{MATCH_INFO}?api_key={API_KEY}'
		response = requests.get(url)
		return response.json()

SH = 'W8-6sZMcznaWCUle6aQ0vUxRPDNnILPIlJHejvHjbAsKmE8VDEUiGbhdDHt_7hSw2spsX2uUa56x3Q'	#SH
JH = 'he8N_27baLzhpe_WF_9uMbPOeoM1Kg7Rip8C4ye_UmBcFf_e50UDahKmqTC71QJG18sFjyArLI5eaA'	#JH   
MH = 'MkL5TyqAsgRDAS7EfODpyXUUi_IaiNobOPTm_zSQj2mE-kfwdE5A0E4loyiO27Kiq9i7IuQucsZQzQ'	#MH
DH = 'No36tHMuK88uHGvmSA23e0Iz7W6MqA-FAQ4snTp52z7s7STLeMgHf74PTU-QnmOA5mpeaFDE0wCfsQ'	#DH

our_team = [SH, JH, MH, DH]

for MATCH_INFO in MATCH_INFO_json:
	data = get_match_info(MATCH_INFO);
	puuid_team_Position = [(participant['puuid'], participant['teamPosition'], participant['win']) for participant in data['info']['participants']]
	our_team_data = [(puuid,teamPosition,win) for puuid,teamPosition,win in puuid_team_Position if puuid in our_team]
	df = pd.DataFrame(our_team_data)
	matches = [df]
	print(matches)

df = pd.DataFrame(matches, columns = ['ID','lane','win'])

grouped = df.groupby(['ID','lane'])['win'].value_counts().unstack(fill_value=0)
grouped['Win_True'] = grouped[True] / (grouped[True] + grouped[False])

print(grouped)

# want win with puuid
#our_team_data_true_win = [(puuid, teamPosition, win) for puuid, teamPosition, win in our_team_data if win]
#print(our_team_data_true_win)



#for participant = 
############### other ver
#Search key-value, 'puuid' : 'value1', 'position' : 'value2'
#participants = data.get('info',{}).get('participants',[])
#puuid = [participant.get('puuid','N/A') for participant in participants]
#team_Position = [participant.get('teamPosition','N/A') for participant in participants]
#print(puuid)
#print(team_Position)


