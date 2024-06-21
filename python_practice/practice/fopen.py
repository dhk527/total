#add_data.py
f = open("./hi.txt","w")
for i in range(11, 20):
	data = "%d번째 줄입니다.\n" % i
	f.write(data)
f.close()

i=0
with open('data.bin', 'w') as hi:
	while True:
		data1 = "%d번째 줄입니다." %i
		hi.write(data1+'\n')
		i+=1
		if not i < 10:
			break

