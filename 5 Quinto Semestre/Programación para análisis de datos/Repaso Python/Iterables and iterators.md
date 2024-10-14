Collections
- Sequence
	- Set
	- Dict
	- List
	- str
	- tuple

We can call iter(), which returns an object called iterator, this object contains all the items of the original collection and with the method \_\_next\_\_() we can move or iterate on the elements.
```python
x = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9] # x es un alista; por tanto es iterable

it = iter(x) # it es un objeto list_iterator

# Nos movemos entre elementos
it.__next__()
	#0
it.__next__()
	#1
it.__next__()
	#2
```

Every time we call a for cycle it automatically takes the iterable object and transforms it into a iterator.