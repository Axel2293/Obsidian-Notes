# Arboles Rojo-Negro
Es un árbol binario de búsqueda donde cada nodo tiene un atributo binario adicional: *el color* (rojo o negro).

- La raíz siempre es negra (*root property*)
- Su un nodo es *Rojo*, sus dos hijos son negros (*red property*)

Aseguran que no exista una ruta más de dos veces más larga que otra.: el árbol está aproximadamente balanceado.

# Arboles B
Arboles para la inserción de datos
*t* = grado mínimo del árbol
- Límite inferior: cada nodo tiene  al menos *t-1* claves
- Limite superior: cada nodo tiene máximo *2t-1* claves
>[!info]
>En el nodo raíz no aplica el limite inferior.

### Inserción
Cuando insertamos, se busca en que nodo debe ir, si el nodo está lleno, entonces se envía la *mediana* entre las claves al padre y se crean 2 nuevos nodos:
- Izquierda: todo lo que hay a la izquierda de la mediana
- Derecha: todo lo que hay a la derecha de la mediana

# Árbol digital de búsqueda
Digital Search Trees (DST)

Es un árbol binario cuya navegación, inserción y eliminación es similar a un *BST*

- La raiz almacena el primer elemento almacenado.
- Cada nivel representa un bit, empezando desde el más significativo, hacia la izquierda

# Árbol de búsqueda RADIX
Hace uso de nodos internos para representar los bits, pero no el valor final.
- Cada dato tiene un camino único
- Cada dato puede hacer que se creen nuevos nodos internos
- Usa mucha memoria ya que se crean muchos nodos internos

## Multicamino MRT
Cada numero se divide en dígitos:
- unidad, decena, centena
Se desperdicia mucha memoria si se tienen pocos números, cada nodo tiene un arreglo de apuntadores a cada unidad dependiendo del nivel.
- Raiz: Centenas 0-9
	- Hijos: Decenas 0-9
		- HIjos: unidades 0-9

