# Tablas Hash
# Arboles Binarios de Búsqueda (ABB) -(BST)
Consiste en que cada nodo tenga dos nodos hijos, donde la *izquierda* es menor que el nodo y la *derecha* es mayor que el nodo. 
>[!info]
>Opcionalmente, los nodos pueden también guardar un apuntador a su padre.
### Operaciones
#### Públicas
- Añadir clave
- Buscar clave
- Clave máxima
- Sucesor de clave
- Predecesor de clave
- Eliminar clave
#### Privados
- Buscar clave a partir de un nodo (lo devuelve, si no, null)
- Encontrar nodo mínimo a partir de otro nodo
- Encontrar nodo máximo a partir de otro nodo
- Encontrar nodo sucesor de otro nodo
- Encontrar nodo predecesor de otro nodo
- Quitar nodo de árbol
### Eliminación
Para eliminar un nodo, debemos tomar en cuenta cuantos hijos tiene:
#### Sin hijos
Simplemente eliminamos el nodo y borramos la referencia del padre (si es hijo).
![[Pasted image 20240417150109.png|500]]
#### Con un hijo
El hijo del nodo a borrar se convierte en el nuevo nodo, asi que el padre ahora apunta a este también.
![[Pasted image 20240417150032.png|500]]
#### Con dos hijos
Obtenemos predecesor del nodo a borrar y ahora la clave del nodo a borrar será la clave de su predecesor.
![[Pasted image 20240417150022.png|500]]
### Complejidad
N = número de elementos
h = altura máxima

Search in balanced tree
- O(h)
- O(log n)

## No balaceados
𝑇 𝑁 = 𝑂(log2 𝑁)
# Arboles Balanceados
## Arboles AVL
## Arboles Rojo-Negro
## Arboles B