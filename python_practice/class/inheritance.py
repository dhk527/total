class Car:
	
	def __init__(self):
		self.wheel_count = 4
		self.door_count = 2

	def start(self):
		print("started...")

	def drive(self):
		print("driving...")

class Electric(Car):

	def __init__(self):
		super().__init__() # super(). ??
						   # it uses superior funcion from superior addr(base class)
	def start(self):
		super().start() 
		print("No sound...")

class CombustionEngineCar(Car):

	def __init__(self):
		super().__init__()
		self.door_count = 1  # overwriting ? yse
							# data or varaiales overwrited!
	
	def start(self):
		super().start()
		print("Yes sound...")
	
	def drive(self):
		print("DRIVE <- overring") # overloading? yes
								# Redefine base-class-method(function), But method name, parameter, return-type is SAME!!!!


ec = Electric()
ec.start()
print("wheel_count? ",ec.wheel_count)
ec.drive()

print('------------')

cc = CombustionEngineCar()
print("door_conut? <- overwritng ",cc.door_count)
cc.start()
cc.drive()

cc1 =  CombustionEngineCar()

print("When you instanciate Class, you get Object(this Object point(handle) address like &cc=", id(cc)," and different &cc1= ", id(cc1))
