Podemos usar \_\_sizeof\_\_() para ver la cantidad de bytes que los elementos ocupan en la memoria, tambien los espacios para guardar los apuntadores y con sys.getsizeof() podemos ver el espacio de todo el objeto.

```python
#Tupla
t = (1,2,3)
t.__sizeof__()
	#48
	# 3 espacios para 3 int(8 bytes) y 3 espacios para los apuntadores de 8 bytes
sys.getsizeof(t)
	#64
	#Cueta todo lo anterior más a si mismo como un apuntador-Estructura de datos

#Lista
	#La lista hace una realocación de memoria cada vez que hace falta, pero tambien alloca memoria de más.
l = [1,2,3]
l.__sizeof__()
	#72
sys.getsizeof()
	#
```