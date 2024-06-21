from string import ascii_lowercase as LOWERS

l = [1,2,3]
t = (3,4)
d = {a : b for a, b in zip(LOWERS,range(1,4))}
s = set()
r =range(10)

print(iter(l))
print(iter(t))
print(iter(d))
print(iter(s))
print(iter(r))


for n in l:
	print(n)

assert iter(l) != iter(l) , "둘이 같은 객체입니다 "
# 반복자가 생성된 메모리의 주소가 같을까요? 즉 같은 객체일까요?

iterator = iter([1,3,4,5,6,7,4])
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
print(next(iterator))
