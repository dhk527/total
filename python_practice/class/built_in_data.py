# python 4 built-in data types
# List: [], mutable (changable)
# Dictionary: {}, mutalbe
# Set: {}, unique element, immutable (unchangable)
# Tuples : (), immutable, once it is created, you cannot change FASTER THAN LIST.

my_list = [1, 2, 3]
print(my_list)
my_list.append(4)
print(my_list)

my_dict ={ 
	"country" : "Korea",
	"city" : "Seoul",
	123 : "hi"
}
print(my_dict)

my_set1 = set((1,2,3))
print(my_set1)
#Set is unique value
#When you list-up unique value in List
#you should set([]) -> then you get unique element
my_set1.add(1)
print(my_set1)
my_set1.add(4)
print(my_set1)
l= [1,1,1,1,2,2,3,3,4,5]
print(set(l))

my_set2 = {1,2,3} # == my_set2 = set((1,2,3))
my_set2.remove(3)
print(my_set2)

#tuples like array (static array)
my_tuples = ('a',2,3)
print(my_tuples[0]) #fater!
"""
SUBSCIPTALBE? <- read index! orderly

print(my_set1[0]) 
# TypeError : 'set' object is not subscriptable
"""








