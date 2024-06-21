# bad logic
is_correct = True
def func():
	if is_correct == True:
		return True
	else:
		return False

# violation of Dry rule of python

# better solution
def func():
	return is_correct

print(func())


total = 0
num_list = [1,2,3,4,5]
for n in num_list:
	total += n

# # better solution
# total = sum(num_list) <- python has good function sum!
import math

#minimum = math.inf # many people use 'for loop'... bad loop!
#for n in minimum:
#	if n < minimum:
#		minimum = n
#print(minimum)

# # better solution
minimum = min(num_list)
maximum = max(num_list)
print(minimum)


for n in num_list:
	total += n
avg = total / len(num_list)

# # better solution
import numpy as np
avg=np.mean(num_list)
print(avg)

# sort vs. sorted
l1 = [4,2,3,7,5]
print(l1)
print(l1.sort())
print("so l1.sort() no return == None, but if you print(l1)")
print("l1=",l1)

l2 = [6,4,2,8,3]
l2 = sorted(l2)
print("l2=",l2)

# case sensitive # python is senstive to seperate case lowercase vs uppercase !! Remember!
google = 1
Google = 2
print(google)
print(Google)














# sort vs. sorted












