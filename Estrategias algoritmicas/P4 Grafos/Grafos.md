Es una representación formal y gráfica de un sistema formado por objetos interrelacionados
### Nodo/Vertice/vertex/node (V)
Son los objetos que se interconectan.
### Aristas/arcos/edge (E)
Son las relaciones entre los nodos

1. **Grafo No Dirigido**: En un grafo no dirigido, las aristas no tienen dirección y simplemente representan una conexión no orientada entre dos nodos. Es decir, si hay una arista que conecta el nodo A con el nodo B, también implica que hay una conexión de B a A. Los grafos no dirigidos son simétricos en términos de conexiones entre nodos.
    
2. **Grafo Dirigido (Digrafo)**: En un grafo dirigido (o digrafo), cada arista tiene una dirección asociada que va desde un nodo inicial hacia un nodo final. Esto significa que la conexión entre dos nodos no es necesariamente bidireccional. Si hay una arista dirigida del nodo A al nodo B, no implica que haya una arista en la dirección opuesta de B a A.
    
3. **Grafo Ponderado**: Un grafo ponderado es aquel en el que cada arista tiene asociado un peso o valor numérico que representa alguna medida (como distancia, costo, tiempo, etc.) asociada con la conexión entre dos nodos. Estos pesos se suelen representar en una matriz de adyacencia o lista de adyacencia.
    
4. **Grafo no Ponderado**: En contraste con un grafo ponderado, un grafo no ponderado es aquel en el que todas las aristas tienen el mismo peso o no tienen pesos asociados. Solo indican la presencia o ausencia de conexión entre nodos.
    
5. **Grafo Regular**: Un grafo regular es aquel en el que todos los nodos tienen el mismo grado, es decir, el mismo número de aristas incidentes. Por ejemplo, un grafo completo es un grafo regular en el que cada par de nodos está conectado por una arista.
    
6. **Grafo Bipartito**: Un grafo bipartito es un grafo cuyos nodos se pueden dividir en dos conjuntos disjuntos de manera que no haya aristas que conecten nodos dentro del mismo conjunto. En otras palabras, los nodos de un conjunto están conectados solo a los nodos del otro conjunto.
    
7. **Grafo Cíclico y Acíclico**: Un grafo cíclico contiene al menos un ciclo, es decir, un camino cerrado que comienza y termina en el mismo nodo sin repetir aristas. Un grafo acíclico no contiene ciclos.
    
8. **Grafo Conexo y Disconexo**: Un grafo conexo es aquel en el que existe al menos un camino entre cualquier par de nodos. Un grafo disconexo tiene al menos dos nodos que no están conectados por ningún camino.
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
- ![[Pasted image 20240508204238.png]]
- 
# DAG
Grafo dirigido acíclico
El orden topológico de un DAG 𝐺 = (𝑉, 𝐸) es un ordenamiento lineal de todos sus vértices tal que si 𝐺 contiene una arista (𝑢, 𝑣) entonces 𝑢 aparece antes que 𝑣 en tal ordenamiento.
![[Pasted image 20240508210914.png]]
![[Pasted image 20240508210923.png]]

Podemos efectuar el ordenamiento topológico en tiempo 𝜃(𝑉 + 𝐸) debido a que DFS toma 𝜃(𝑉 + 𝐸) y necesitamos 𝑂(1) para insertar cada uno de los |𝑉| vértices al frente de la lista enlazada.
# Componentes fuertemente conexos SCC
Un componente fuertemente conexo de un grafo dirigido 𝐺 = (𝑉, 𝐸) es un conjunto maximal de vértices 𝐶 ⊆ 𝑉 tal que por cada par de vértices 𝑢 y 𝑣 en 𝐶, tenemos _u_  _v_ y _v_  _u_; esto es, los vértices 𝑢 y 𝑣 son alcanzables desde cada uno de ellos.

![[Pasted image 20240508213319.png]]
![[Pasted image 20240508213627.png]]
# Minimum spanning tree
Árbol mínimo de expansión
- Un árbol recubridor de un grafo conexo ponderado G es un subgrafo acíclico que une todos los vértices de G.
- Se necesitan *n-1* caminos para lograr el minimo
- Un árbol recubridor mínimo (ARM) es el árbol recubridor cuya suma de pesos de las aristas elegidas es la mínima.
- SIN CICLOS
## Prim
Tiene la propiedad de que las aristas en A siempre forman un solo árbol
- El árbol comienza a partir de un vértice raíz arbitrario 𝑟 y crece hasta que haya abarcado a todos los vértices en 𝑉 (alcanzables desde 𝑟).
- Estrategia **voraz** porque a cada paso añade al árbol una arista que contribuye con lo *menos posible al peso del árbol*.
- Evita hacer ciclos
![[Pasted image 20240508222124.png]]
- mantener una cola de prioridad minima de pesos
- inicialmente, todos los nodos tienen peso infinito y parent null, tambien se agregan a la cola de prioridad
- Se recorre de origen-r 
- Mientras la cola de prioridad no este vacia, sacar un elemento (peso minimo) y analizar su lista de adjacencia
	- Si se encuentra una ruta con menor peso para el nodo en la adj, remplazar los datos
	- El nodo adjacente tiene que estar en la cola para poder ser analizado
# Kruskal
En el algoritmo de Kruskal, el conjunto A es un bosque cuyos vértices siempre son los del grafo dado (todo el tiempo).

La arista segura que se añade siempre es la arista de menor peso en el grafo que conecta dos componentes distintos (árboles).
- Es voraz
Pasos
- Un bosque F con los nodos
- E son las aristas
- A son las aristas en el bosque

- Buscamos la arista con peso minimo
	- Si no crea un ciclo y conecta dos arboles diferentes de F, la agregamos a la conexion entre arboles en F y la arista a A
![[Pasted image 20240508234548.png]]
## Conjuntos disjuntos
![[Pasted image 20240508235041.png]]
![[Pasted image 20240508235110.png]]
![[Pasted image 20240508235823.png]]
### Compresión de ruta
![[Pasted image 20240509000224.png]]

# RUTAS MAS CORTAS
## Aristas con peso negativo
## Relajación
El proceso de relajar una arista (𝑢, 𝑣) consiste en probar si podemos mejorar la ruta más corta hacia 𝑣 encontrada hasta el momento, pasando a través de 𝑢. Si se mejora, actualizamos 𝑣. 𝑑 y 𝑣. 𝑝𝑎𝑟𝑒𝑛𝑡.
![[Pasted image 20240509005422.png]]
# Bellman-ford
Permite aristas con peso negativo y produce una salida correcta si no hay ciclos negativos
Resuelve la ruta mas corta en el caso general
- ❑ Normalmente, el algoritmo puede detectar la presencia de un ciclo negativo.
- Devuelve un valor lógico indicando si existe o no tal ciclo. En caso de ser verdadero, no existe una solución.
- El algoritmo relaja aristas y decrementa progresivamente 𝑣. 𝑑 con el peso de la ruta más corta desde el origen 𝑠 hasta cada vértice, hasta alcanzar el peso de la ruta más corta real 𝛿(𝑠, 𝑣).
- ![[Pasted image 20240509005422.png]]
- ![[Pasted image 20240509010320.png]]
![[Pasted image 20240509010233.png]]
# Dijkstra
Algoritmo voraz, supone que todos los pesos son no negativos.
![[Pasted image 20240509012021.png]]
# Floyd-Warshall
Usa programación dinámica
![[Pasted image 20240508222526.png]]