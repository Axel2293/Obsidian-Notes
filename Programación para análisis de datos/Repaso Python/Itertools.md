## Iterable operators
### ZIP
This function works a the theory of a zipper, it has two sides and when you pull up it joins the two sides. In practice it takes iterables as arguments and it joins the elements at the same indexes.

Zip creates a tuple with the result and skips the elements that dont have counterpart, for example:
```python
list(zip([1, 2, 3], ['a', 'b', 'c']))
	#[(1, 'a'), (2, 'b'), (3, 'c')]
list(zip([1, 2, 3], ['a', 'b']))
	#[(1, 'a'), (2, 'b')]


```
### MAP
Maps the given iterable elements with the given fuction results. 

