"""
# dummy method
import method_car  # All Class is imported in import_car.py from method_car.py
teslaY = method_car.Car(color = "red", engine_type = 'elec') # very bothered me
teslaY.start_engine()
print(vars(teslaY))
"""

from method_car import Car  # All Class bascially have many Class, it makes file heavy during run-time.
							# you should not use from method_car import *
							# from method_car import Car as C 
							# (if you use very-long-length-Class-name, you would be better use to 'as')
							#  tesla = Car(...) -> tesla = C(...), simple wording
teslaY = Car(color = "red", engine_type = 'elec')
teslaY.start_engine()
print(vars(teslaY))


tesla3 = Car('blue', "gas")
tesla3.start_engine()

print(vars(tesla3))

