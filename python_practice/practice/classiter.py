class Randomintiterable:
	def __init__(self, n): # self인자를 꼭 넣어야하는건 기존에 __buildins__에서 상속받은 것들 중 이러한 초기화 던더 메서드가 있으니까 오버라이딩 시키기 위해 하는게 아닐까...? 거기서 어디에 오버라이딩 시킬지 가리키는게 아닐까 싶음...
		self.n = n

	def __iter__(self):
		return Randomintiterator(self.n)

from random import randint ## randint는 함수 자동 import에 없는것만 골라서 쓰겠다 이뜻인듯.
							## 자동으로 내장되어있는 것들은 안써도 되는거야 print(dir(builtins)) 니까 어마어마하게 많은거지 내장 메서드들이...

class Randomintiterator:
	def __init__(self, n):
		self.count = 0
		self.n = n

	def __iter__(self):
		return self

	def __next__(self):
		if self.count < self.n:
			self.count += 1
			return randint(1, 100)
		else:
			raise StopIteration # raise <- 예외를 발생시켜서 프로그램의 흐름을 중단!

able = Randomintiterable(3)
tor1 = iter(able)
tor2 = iter(able)

assert tor2 != tor1 # iterator들은 결국은 또다른 객체니까 주소도 다르겠지 확인해봐?

print(iter(tor1))
print(iter(tor2))

print(next(tor1))
print(next(tor1))
print(next(tor1))
print(next(tor1)) 

for n in Randomintiterable(5): # 결국 Randomintiterable 얘 때문에 iterable 된거니까 말이다
	print(5) #결론적으로 우리는 둘 모두를 for문에서 다른 내장 자료구조처럼 문제없이 사용할 수 있음을 확인할 수 있다.
