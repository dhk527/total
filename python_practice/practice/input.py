a=[]
while sum(a) <= 40:
	print("자연수를 입력하시오") ## 이거 쓰지말고 프롬프트를 쓰자!
	b=input("print쓰지말고 그냥 input에다가 쓰면 프롬프트가 나온다!i:" )
	b=int(b)
	a.append(b)
	if sum(a) >= 40:
		print("over 40")

# 아래는 딴거임;
sum_basic=0

for i in range(6):
	sum_basic+=i

print(sum_basic)
	
