class math:
	def ninenine(self,Set_value):
		for i in range(1,9):
		#print("3x",i,"=",i*Set_value)
		#아예 다른 열로 나타내기 print([Set_value * i for i in range(1,9)])
			print("{}x{}={}".format(Set_value,i,Set_value*i))

hi=math()
hi.ninenine(3)

#코드를 생성자안에 작성하면 코드가 깔끔하게 정리될 수 있다!
class HUMAN:
	def __init__(self,name,date):			 # 생성자!
		print(name,"님이",date,"에  태어났습니다.") # if 바로 실행: 초기화자 안에 작성 else: 메서드로 작성
		self.first_name=name[:name.index(' ')] #name 인자는 이 객체의 속성에 저장.
		self.last_name=name[name.index(' ')+1:] #self라는 키워드는 객체를 참조하는 특별한 키워드! 그냥 이런식으로 쓸거야 알려주는
												#self는 결국 cpp 참조에서 this에서 파생됨.

class 사람:
	def __init__(self, 사람0, 사람1):
		self.사람0=사람0
		self.사람1=사람1

foo=사람("굳1","굳2")
print(foo.사람0, foo.사람1)


class friend:
	def __init__(self): #self는 여기 객체를 참조할게라는 뜻., 특별한 키워드임.
		self.friend=[] #일반 function이라고 생각해라. 그냥... 자료형을 오른쪽으로 준다고 생각하셈 

	def add_friend(self,name):
		self.friend.append(name)

	def print_friend(self):
		print(self.friend)

def printt():
	print("hi?")

good=HUMAN("good morning","12.12") # c언어는 l-value에 선언 메모리 할당 크기를 결정하잖아?(정적타이핑)  얘는 그런게 없으니
print(good.first_name)			#아예 정의(초기화를) 시켜버리는거지 자체적으로 그러니까 class나 def나 [] () 같은 데이터타입이 모두 가능한 것
print(good.last_name)

bar=friend()
bar.add_friend("good")
bar.add_friend("bad")
bar.print_friend()

baz=printt() # 결국 선언 정의가 한번에 되니까~  뭐겠니 c언어는 이렇게 안되잖아~  

class HUMAN_list:
	def __init__(self,I,friends): #*args 는 튜플에 , 로 되나봄 ㅇㅇ...
		self.I=I
		self.friends=friends # 하나, 하나 넣고 그 마지막은 여러가지를 넣나보넫?
	
	def print_list(self):
		print(self.I,"친구목록")
		for i in self.friends: 
			print(i)

	def print_part_list(self,number):
		print( self.friends[:number])



lst=HUMAN_list("gd",["gdd","ddg","goodae","faer"])
lst.print_list()
lst.print_part_list(3)












