Es una representación formal y gráfica de un sistema formado por objetos interrelacionados
### Nodo/Vertice (V)
Son los objetos que se interconectan.
### Aristas/arcos (E)
Son las relaciones entre los nodos
# BFS *Breadth-first search or Recorrido de amplitud*
Se inicia en un nodo `s`y se va recorriendo por "niveles",
Tres colores, usa una *cola - FIFO*:
- Blanco: nodos comienzan blancos
- Gris: nodos por visitar (descubiertos)
- Negro: nodos visitados (ya se calculó su distancia)

![[Pasted image 20240508164846.png]]
 El tiempo de cada adición y extracción de la cola es 𝑂(1). El tiempo total
dedicado a operaciones con la cola es 𝑂(|𝑉|).

Como la suma de las longitudes de todas las listas de adyacencia es

𝑂 |𝐸| , el tiempo que lleva recorrer todas las listas es 𝑂(|𝐸|).

 El tiempo de la inicialización es 𝑂(|𝑉|).

 El tiempo de ejecución total de BFS es 𝑂( 𝑉 + |𝐸|).

 Por tanto, el tiempo de ejecución de BFS es lineal con respecto al tamaño

de la representación de listas de adyacencia de 𝐺.
## BFT
Es el árbol resultante despues de calcular las rutas mas cortas desde s a los vertices. Es un *sub-grafo*.
![[Pasted image 20240508165717.png]]

# DFS *Depth-First-Search or Búsqueda de profundidad*
La búsqueda en profundidad explora aristas hacia afuera a partir del vértice descubierto más reciente *v* que aún tiene aristas
Similar a BFS, pero ahora usamos un *stack -LIFO* y se van a recorrer siempre primero los nodos hijos de los hijos, etc. (Los nodos descubiertos se agregan al stack-push)
>[!seealso]
>Si hay nodos no alcanzables desde origen, DFS selecciona alguno de ellos y repite el proceso.

![[Pasted image 20240508203110.png]]
![[Pasted image 20240508203148.png]]

![[Pasted image 20240508203602.png]]
![[Pasted image 20240508203636.png]]
### Clasificación de aristas
- Tree edges:  son aristas en GP. Toda arista (u, v) tal que si v fue descubierto por primera vez por u.
- Back edges: son aristas (u, v) que conectan un vértice u con un ancestro v en GP.
- Forward edges: son aristas (u, v) que conectan un vértice u con un descendiente v en un DFT.
- Cross edges: son las demás aristas. Pueden conectar dos vértices del mismo DFT, siempre y cuando uno no sea ancestro del otro; o pueden conectar vértices de diferentes DFTs.
# DAG

## Minimum spanning tree

