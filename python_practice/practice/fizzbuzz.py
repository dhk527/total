result = []
n = 40

for i in range(n):
	element = ("fast" if(i+1) % 3 == 0 else "")	+ ("campus" if(i+1)% 5 == 0 else "")
	
	result.append(element)

print(result)
