# Custom class
# naming convention
# PascalCase : class name first character uppercase
# camelCase : object name first character lowercase
# snake_case : anything else <- my team rule
"""
class Car:
	pass

when I add atrribute

tesla.color = "red"				# attribute(vars)
tesla.engine_type = "electric"  # attribute(vars)

print(tesla.color)
# How to list all the attributes?
print(vars(tesla))

problem) The Attribue Code Above is inefficiency causew WE ARE LAZY to ADD this ATTRIBUTE ALWAYS!!!
solution) so we use CONSTURUCTOR (__init__)

"""

class Car:
	def __init__(self): # 'self' is default (Object currennt value)
		self.color = "red"
		self.engine_type = "electric"

tesla = Car() # python no new() so when you write this line, you get Car's Object(tesla)

print(tesla.color)
# How to list all the attributes?
print(vars(tesla))


class Bicycle:
	def __init__(self, color, engine_type):
		self.color = color 
		self.engine_type = engine_type


yamaha = Bicycle("blue", "human")
print(vars(yamaha))

# if you want to change atrribute(var?)
# then, you should add parameter. __init__(self, color, engine_type)
# you should self.parameter = parmater (cause, you should initialized !





'''
CONSTRUCTER?
When is called?
what is constructor function? how to input the attribute(.color, .electric) into OBJECT ! 
def __init__(self):

'''






