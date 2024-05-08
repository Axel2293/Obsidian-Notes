Es una representación formal y gráfica de un sistema formado por objetos interrelacionados
### Nodo/Vertice (V)
Son los objetos que se interconectan.
### Aristas/arcos (E)
Son las relaciones entre los nodos
# BFS *Breadth-first search*
Se inicia en un nodo `s`y se va recorriendo por "niveles",
Tres colores:
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
Es el arbol resultante despues de calcular las rutas mas cortas desde s a los vertices. Es un *sub-grafo*.
![[Pasted image 20240508165717.png]]

# DFS

# DAG

## Minimum spanning tree

