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

```python
# Map the strings list with its lenght
list(map(len, ['abc', 'de', 'fghi']))
	#[3, 2, 4]


```
### COUNT
This is a infinite generative function, we can state an *initial* value and a *step* value. With those values the function will yield.
```python
from itertools import count

sequence = count(start=0, step=1)

while(next(sequence) <= 10):

print(next(sequence))
#Salida
	#1 3 5 7 9 11
```

### CYCLE
