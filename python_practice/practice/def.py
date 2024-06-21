def add_mul(choice, *args, **kwargs):
	if choice == "add":
		result = 0
		for i in args:
			result += i

		return result

	elif choice == 'mul':
		result = 1
		for i in args:
			result *=i

		return result


print(add_mul('add',3,4,5,5,a=3,b=4))
