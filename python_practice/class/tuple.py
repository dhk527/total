interest = ('hi','bye')
k=list(interest)
print(k)


All_Value= [1, 3, 2, 10, 12, 11, 15]

def print_even(All_Value):
	for i in All_Value:
		if i%2==0:
			print(i)
	
print_even(All_Value)


def make_url(name):
	return "www."+name+".com"

print(make_url("naver"))
