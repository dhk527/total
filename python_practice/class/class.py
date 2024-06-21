class human:
	def smile(self):
		print('히하호')

	def cry(self):
		for i in "응애애애애": print(i) #순환자의 위력을 받아라!

	def call(self,name,PhoneNumber):
		print(name + "에게 "+PhoneNumber+" 발신 중")

	def private_info(self,ID):
		center = 'X' * (len(ID)-2)
		print(ID[0] + center + ID[-1]) ## 중요 예재!!


human().smile()
hi=human()
hi.cry()

human().call('너','010-1234-1234')


class math:
	def ninenine(self,a,b):
		print(a*b)

math().ninenine(3,7)

humans=human()
humans.private_info("유종훈")
humans.private_info("오리아나")
