Arrays must have the same data type in all of its elements, list can have all types.
- Arrays are static data structures
- Mutable

#### Creating an array
```python
import numpy as np

# Creating an array with 3 elements and 1 dimension
arr = np.array([42,5,6])

# Array with 2 elements and 2 dimensional
arr_2d = np.array([[3,4], [6,7]])
	# Array its the x (Columns)
	# Anidated list are the y (Rows)


```

#### Copy an array
arr.copy() is deep copy, so we don't have to worry about modifying the original array.
>[!info]
Also, we can create a reference to the original array with arr.view()
### Linspace
Generate numbers with the given interval, it will automatically get the step value that can make the desired amount of numbers.
```python
np.linspace( 0, 2, 9 ) # 9 números del 0 al 2
# OUT : array([0. , 0.25, 0.5 , 0.75, 1. , 1.25, 1.5 , 1.75, 2. ])
```

### Tile
### Repeat
