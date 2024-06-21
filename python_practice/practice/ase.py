from collection.abc import Collection, Container, Sequence

l = [1, 2, 3]
t = (3, 4)
d = {'a': 1, 'b': 2}
s = set()

assert len(l) == 3
assert len(t) == 2
assert len(d) == 2
assert len(s) == 0


assert issubclass(list, Collection)
assert issubclass(tuple, Collection)
assert issubclass(dict, Collection)
assert issubclass(set, Collection)
