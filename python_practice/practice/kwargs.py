def func(a, *b, c=3, **k):
	print("a = {}".format(a))
	print("b = {}".format(b))
	print("c = {}".format(c))
	print("k = {}".format(k))

func(1,2,3,4, e=5,f=4,d=41)

