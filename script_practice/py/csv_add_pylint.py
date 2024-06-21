""" csv.py """
import csv
import pandas as pd
# CSV? comma-separated values
# literally, it is a file consist of comma.

# using file - origin
print("---------ORIGIN-----------")
file = open("../sample.csv", "r")
print(file.read())
file.close()
print("----------CSV----------")

# # using csv package
#import csv

with open("../sample.csv", "r") as data_file:
	sample_data = csv.reader(data_file) # csv reader -> listing!!
	for row in sample_data:
		print(row)
	for row in sample_data: # it isn't twice...
		print(row[1]) # file.close() ;;;

print("----------CSV-element----------")

with open("../sample.csv", "r") as data_file:
	sample_data_index = csv.reader(data_file)
	for row_index in sample_data_index:
		print(row_index[1]) # if you want read element...

print("--------CSV-element-select------------")

with open("../sample.csv", "r") as data_file_select:
	sample_data = csv.reader(data_file_select) # csv reader -> listing!!
	for row in sample_data:
		if row[0] != "Job":
			print(row[0])
print("---------PANDAS-----------")

# # using pandas NOT BUILD-IN LIB
# data scientistic analyic
# Computing Distributed processing
# faster, load automatically

#import pandas as pd
data = pd.read_csv("../sample.csv")
print(data)

print("---------PANDAS-select-----------")
print(data['Job'])








