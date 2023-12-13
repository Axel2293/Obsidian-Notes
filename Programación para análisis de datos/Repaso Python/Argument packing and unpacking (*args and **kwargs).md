
## Packing
Podemos hacer packing de la siguiente forma con el operador \*.
```python
>>> *a, = 1, 2 >>> a [1, 2]

# Tambien, donde b toma todos los argumentos restantes
>>> a, *b = 1, 2, 3
```
## Unpacking
Podemos hacer unpacking mediante el operador \*\*.
```python
>>> food = {'fish':3, 'meat':5, 'pasta':9} 
>>> colors = {'red': 'intensity', 'yellow':'happiness'} 
>>> merged_dict = {**food, **colors} 
>>> merged_dict {'fish': 3, 'meat': 5, 'pasta': 9, 'red': 'intensity', 'yellow': 'happiness'}
```


## Argumentos variables
A los \*args se les conoce como **argumentos posicionales** y a los \*\*kwargs como **keyword args**.
- \* args (argumentos sin palabras clave)  
- \*\* kwargs (argumentos de palabras clave)

### \*args
  
Si no estamos seguros de cuántos elementos queremos sumar, entones no estamos seguros de la cantidad de argumentos que se pueden pasar a la función adicionar().

Los argumentos se pasan como una tupla y estos argumentos pasados forman una tupla dentro de la función con el mismo nombre que el parámetro excluyendo el asterisco \*.

### \*\*kwargs
Los kwargs permiten tener una longitud de parámetros variable con palabras clave, por ejemplo, podemos tener ciertos parámetros como el paso, cantidad de pixeles, etc, pero todo denotado por una palabra clave.

- Los kwargs son un diccionario dentro de la función, en donde tenemos pares key-valor.
Ejemplo:
```python
def intro(**data):
    print("\nData type of argument:",type(data))

    for key, value in data.items():
        print("{} is {}".format(key,value))

intro(Firstname="Sita", Lastname="Sharma", Age=22, Phone=1234567890)
intro(Firstname="John", Lastname="Wood", Email="johnwood@nomail.com", Country="Wakanda", Age=25, Phone=9876543210)
```

Salida
```
Data type of argument: <class 'dict'>
Firstname is Sita
Lastname is Sharma
Age is 22
Phone is 1234567890

Data type of argument: <class 'dict'>
Firstname is John
Lastname is Wood
Email is johnwood@nomail.com
Country is Wakanda
Age is 25
Phone is 9876543210
```


