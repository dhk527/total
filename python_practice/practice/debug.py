# # How to debug?
# 1. Explain the problem
# 2. Produce the bug again to see what went wrong
# 3. Evaluate the line by line]
# 4. Check the underline portion
# 5. User print() <- final mehtod to debug like MSGOUT
# 6. Fix the error 
# LEGB rule local, a()b(), global, Built-in

def cumulative_sum(num):
	total = 0;
	for i in range(1, num):
		print(i)
		total += i
	return total

print(cumulative_sum(10))

# we want to get 1,2,3, ... ,7, 8, 9, 10 
# so we shoud edit "num" to "num+1"
# compile error is very easy !!! but logical error is ver hard to find it. so print() is powerful to find the error. So find error in LOG!!!
# LOG is composed of print()!!

		
