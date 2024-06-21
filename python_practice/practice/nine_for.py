k=1
v=1
t=[]

for k in range(1,10):
	if v == 9:
		t.clear()
	for v in range(1,10):
		m = k * v		
		t.append(m)

	print(t)

print("\n")
#list comprehension


for j in range(1,10):
	arr = [ j * i for i in range(1,10) ]
	print(arr)
#압도적으로 줄여드네


print("\n")
word = "아이구"

print([i*3 for i in word])
