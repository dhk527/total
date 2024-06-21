# Assignment Operator(=)
 # Assignme with an = on lists does not make a copy.
 # instead, assignment makes the two varaiables point to the one list in memory.

colors=['red','blue','green']
b = colors						  # also b points to colors.
b.append('white') ### BIG IMPORTATNT !!! When you append memory of list, it will be changed Variable pointing the list.
print(b)
print(colors)

#Shallow Copy
#A shdllow copy constructs a new compound object and then (to the extent possible) inserts references into it to the objects found in the original

y=[[1,2],[2,4]]
c=y[:] # shallow copy # basically, same assignment it also point to address memory of list
c[0].append([3,6])
print(c)
print(y)


c[0].append(3)
print(c)
print(y)


# Deep copy

# A deep copy constructs a new compound object and the, recursively, inserts copies into it of the objects found in the original.

f=[[1,2],[2,4]]
print(f)
import copy
e = copy.deepcopy(f) # deep copy
e[0].append([3,6])
print("deep copy e",e)
print("deep copy origin f", f)


#simple list

t=[1,2,3,4]
u=t[:]
u.append(5)
print(t)
print(u)
