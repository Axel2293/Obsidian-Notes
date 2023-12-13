dtype can be used to create data structures and formats, for example we have a matrix and we want to give every row a name and a data type:
```python
# Every row has a name and a grade
	# Name will be of 16 chars and with type "<U16"
	# Grades are a tuple with more than one element and float64 elements
dt = np.dtype([('name', np.unicode_, 16), ('grades', np.float64, (2,))])
```

### Access with names
We can access every row with the name we specified:
```python
#Crea un arreglo con datos de tipo dt

arreglo2 = np.array([[('Paula',90),('Mario',[95,100])]],dtype=dt) 
	# Note que para igualar dimensiones repite 90 para Paula

arreglo2['name']
# OUT: array([['Paula', 'Mario']], dtype='<U16')
arreglo2['grades']
# OUT: array([[[ 90.,  90.],
	        #  [ 95., 100.]]])
```

