def plane(a,b,c,d):
	print("{}x+{}y+{}z={}".format(a,b,c,d))

print(plane(*[1,34,-41,32]))
print(plane(1,34,-41,32))

a,b,*c=3,4,123,'32',1,'a'
print([a,b,*c])
print("starred assignment:{}".format(a))
print("starred assignment:{}".format(b))
print("*c starred assignment:{}".format(*c))

# 반대로 *c 가 앞에있으면 ?

print("*c sssstarred assignment:{}".format(*c))
print("sssstarred assignment:{}".format(a))
print("sssstarred assignment:{}".format(b))

def function(a, *b, **c):
	print("a={}".format(a))
	print("b={}".format(b))
	print("c={}".format(c))


function(2,4,55,12,'a', c=3, d=4)

