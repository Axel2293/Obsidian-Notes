De esta forma ahorramos lineas de código y nos permite asignar valores mediante un for a la lista.
```python
lista = [i for i in range(4)]
	#[0, 1, 2, 3]

#Comprehension con logica
lista = [i for i in range(10) if i%2==0]
	#[0, 2, 4, 6, 8]

listaRaiz = [i**0.5 for i in range(10)]
	#[0.0, 1.0, 1.4142135623730951, 1.7320508075688772, 2.0, 2.23606797749979, 2.449489742783178, 2.6457513110645907, 2.8284271247461903, 3.0]
```

### Anidaciones
Podemos anidar estructuras repetitivas de la siguiente forma

```python
# Crea todas las combinaciones de dos dados y guarda los pares en tuplas dentro de la lista
dados = [(x,y) for x in range(1,7) for y in range(1,7)]

print(dados)
```
