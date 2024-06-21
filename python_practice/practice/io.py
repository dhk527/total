import io
s = 'abc'
for c in s:
	print(c)

print()

file_name = 'any_textfile_path'

for line in open(file_name):
	print(line)

assert issubclass(str, Iterable)
assert issubclass(io.TextIOWrapper, Iterable)
