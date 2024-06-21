"""car.py"""

# Custom class
# pass == return ?? nono pass is void
# class Car():
#	pass <- if you use, we can declare void class type

class Car:
	def __init__(self, color, engine_type):
		self.color = color
		self.engine_type = engine_type
		self.speed = 0
		self.is_start = False
	
	def start_engine(self):
		self.speed = 9
		self.is_start = True

	def speed_up(self, speed):
		if self.is_start:
			self.speed += speed
		else:
			return 

	def speed_down(self, speed):
		if self.is_start:
			self.speed -= speed
		else:
			return 
"""
tesla = Car('blue','elec')
print(vars(tesla))


tesla.speed_up(4)
print(vars(tesla))
	
tesla.start_engine()
print(vars(tesla))

tesla.speed_down(5)
print(vars(tesla))

for i in range(1,100): # 1~99
	tesla.speed_up(i)
	print(vars(tesla))
print(vars(tesla))
				  """
