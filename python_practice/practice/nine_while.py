t=[]
k=1
v=1

while k < 10:
	v=1 ## for문이랑 다른건 딱 하나 while문은 초기화를 해줘야함! for문은 돌리는 순간 다시 초기화 시킴
	while v < 10:
		t.append(k*v)	
		v+=1
	print(t)
	k+=1	
	if len(t)==9:
		t.clear()
