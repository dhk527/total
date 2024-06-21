# scope
# local scope / global scope / enclosed scope / enclosing scope
# namespace : same name but not same address!!

my_score = 50								# global scope

def inside_value_function():
	# global my_score # if you delete appendix, local scope will be global scope
	my_score = 80
	print(f"my score inside is {my_score}")  # local scope

inside_value_function()
print(f"my score outside is {my_score}")     


# # What about if condition
did_extra_work = True
if did_extra_work:
	my_score = 90

print(f"my score outside is {my_score}") # if condition, for-loop don't make new namespace


#nonlocal ? same variable x, and when nested function, near same name variable is being same variable value (same scope)
def a():
	x = 10 # enclosing variable
	def b():
		nonlocal x
		x = 20 # enclosed variable
	b()
	print(x)

a()

# How Python search the variable?
# (LEGB rule) 
# 1. local   function
# 2. enclosing  a() b()
# 3. global   global
# 4. built-in  print(built_in) print(dir(__builtins__))

country = ["south korea"]

def inside_list_function():
	country.append("usa") # there is no find to "conutry", so python scope extend to global (LEGB rule)
	#country = ["usa"]  # but if there is country in local, the country variable is redefintion. 


inside_list_function()
print(country)


# when you use the keyword 'global'
# # globgals keyword
# print(globals())

# Global Constant?
HTTP_ENDPOINT = "https://yelp.com/" # the duplication variable situation, we use global constant

def print_us_restaurant_url():
	print(f"{HTTP_ENDPOINT}/biz/arya-steakhouse-palo-alto")

def print_korean_restaurant_url():
	print(f"{HTTP_ENDPOINT}//biz/tobang-santa-clara-2")











