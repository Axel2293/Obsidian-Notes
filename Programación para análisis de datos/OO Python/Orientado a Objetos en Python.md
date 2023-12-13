De costumbre, todo objeto hereda de object, asi que ya contamos con un metodo constructor y un inicializador.

## Self
Para cada metodo de una instacia se debe mandar la direccion de la misma, como self.
```python
class Luchador:
	def __init__(self, nombre, edad):
		self.nombre = nombre;
		self.edad = edad; 
```
## Cls (Class)
Cuando un metodo trabaja con clases recibe la clase llamada cls
```python
	def __new__(cls):
		return Super().__new__(cls)
```
#### Constructor
```python
__new__()
```
#### Inicializador
```python
__init__()
```

## Métodos estáticos
Son métodos que no requieren de self ya que no estan dentro de una instancia y se pueden llamar para hacer cosas generales que no requieran instancias de la misma clase.

## Encapsulamiento
- Public: Cualquiera puede acceder a los datos
- Protected: Solo ciertas cosas pueden acceder a los datos
- Private: Nadie puede acceder a los datos, mas que la misma instancia

## Atributos de clase
Es un atributo que sera el mismo para toda la clase
```python
class Luchador:
	# Atributo de clase
	deportista = True
```

### Decoradores / Tags
Podemos agregar decoradores para indicar de que tipo son cada metodo
- @