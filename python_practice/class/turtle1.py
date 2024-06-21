import time
from turtle import Turtle  #python usullay use Declaring class first character is Uppercase 
							#from (built_in module) import (Class name)
							#line 2 means built-in module bring in into this namespace.
john = Turtle()
print(john)

john.shape("turtle")
john.color("red","green")

while True:
	john.forward(5)
	john.left(5)
	time.sleep(1)


