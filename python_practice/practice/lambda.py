def print_ops(func, num1, num2):
	print(func(num1, num2))

def multiply(a,b):
	return a*b

def plus(a,b):
	return a+b


print_ops(multiply,4,2)
print_ops(plus,5,6)


def print_lambda_ops(func, num3, num4):
	print(func(num3,num4))

print_lambda_ops(lambda num3, num4: num3+num4,7,6) ## 그냥 함수 대신 lambda쓰면 한줄로 쓸 수 있게 표현하는거임.
print_lambda_ops(lambda num3, num4: num3*num4,6,8)


def power(x,y):
	return  x**y

power_lambda=lambda x,y=0:x**y

print(power(3,4))
print(power_lambda(3,4))
print("두 결과는 같음!!")
print("default도 가능: {}".format(power_lambda(3)))

mapp=[3,1,3,4,123,2,4,5]
mappp=[1,2,3,4,5,6]
print(list(map(lambda k,j:k**j,mapp,mappp))) # for문 대신 쓰기!
