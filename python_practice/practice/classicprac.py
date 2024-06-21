sentence = " I'm a boy, you're a girl"
counter={}

for c in sentence:
	if c.isalpha(): 
		c=c.lower()
		counter[c]=counter.get(c,0)+1

print(counter)

