
def add(num1, num2):
	return num1 + num2

def sub(num1, num2):
	return num1 - num2

def mul(num1, num2):
	return num1 * num2

def div(num1, num2):
	if num2:
		return num1 / num2
	else:
		return print("num2 == 0")
		

def calc(num1, num2, func):
	return func(num1, num2)

add2 = add # Assign

print(calc(3,4,add))
print(calc(3,4,func=add2))

#higher function -> simplified -> Decorator
#DECORATOR

def higer_order_func(func):

	def inside():
		print("start...")
		func()
		print("end...")

	return inside

@higer_order_func  # take arguments(func) below sample_order_example (=func) 
def sample_order_example():
	print("I am inside")

sample_order_example()

@higer_order_func
def good():
	print("I am good")

good()

