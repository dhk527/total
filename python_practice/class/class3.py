class car:
	def __init__(self,바퀴,가격):
		self.바퀴=바퀴
		self.가격=가격


print(car(2,200).바퀴)
k=car(2,200)
print(k.가격)

class cycle(car):
	def __init__(self,바퀴,가격,구동계):
		super().__init__(바퀴,가격) #상위 주소로 이동!
		self.구동계=구동계


print(cycle(2,200,'하이').바퀴)

k=cycle(2,200,'하이')

print(k.구동계)






