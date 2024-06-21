# file management - like C, Cpp style <- memory free
file = open("../README.txt","r")
print(file.read())
file.close() # free memory!, then you get memory.

# memory management
"""
Early days...
1. Forgetting to free your memory 
2. Freeing your memory too soon
-> memory leakage issue.

modern language
- GC
memory management -> find Unused Variables to kill automatically.
Many method of GC.

1. Garbage collector delete Value-without-assigned-Memory. 
2. always check memory 

"""

# More simple!!! file management 
with open("../README.txt", "r") as file:  # as name!
	print(file.read())

with open("../WRITEME.txt", "w") as file: # w ->  overwrite
	print("String save length", file.write("Thanks!"))

# I don't wanna overwrite!!! -> Use Append!!! 'a'

with open("../WRITEME.txt", "a") as file:
	print("Not Overwrite!, but Append! ", file.write("append!"))

with open("../WRITEME.txt", "r") as file:
	print("Check if WRTIME.txt is written well", file.read())

