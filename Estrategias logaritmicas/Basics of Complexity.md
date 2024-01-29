### Worst case

La notación *Big O (O)* describe el *límite superior asintótico* o *peor caso* del tiempo de ejecución de un algoritmo. Representa una cota superior para la función de complejidad temporal.
    - Formalmente, una función f(n) está en O(g(n)) si existen constantes c y n₀ tales que f(n) ≤ c * g(n) para todo n ≥ n₀.
    - En términos más simples, O(g(n)) indica que la función f(n) nunca crece más rápido que una constante multiplicada por g(n) a medida que n tiende hacia el infinito.
    - Por ejemplo, si un algoritmo tiene una complejidad temporal de O(n²), significa que el tiempo de ejecución del algoritmo no supera c * n² para algún valor constante c y para tamaños de entrada lo suficientemente grandes.
### Best case
Its represented with *Omega Ω*
    
 Describe el límite inferior asintótico o mejor caso del tiempo de ejecución de un algoritmo. Representa una cota inferior para la función de complejidad temporal.
    - Formalmente, una función f(n) está en Ω(g(n)) si existen constantes c y n₀ tales que f(n) ≥ c * g(n) para todo n ≥ n₀.
    - En términos más simples, Ω(g(n)) indica que la función f(n) nunca crece más lentamente que una constante multiplicada por g(n) a medida que n tiende hacia el infinito.
    - Por ejemplo, si un algoritmo tiene una complejidad temporal de Ω(n), significa que el tiempo de ejecución del algoritmo es al menos proporcional a n para tamaños de entrada lo suficientemente grandes.
## **Notación Theta (Θ)**:
    
- La notación Theta (Θ) *describe tanto el límite inferior como el límite superior asintótico* del tiempo de ejecución de un algoritmo. Representa una cota ajustada o precisa para la función de complejidad temporal.
- Formalmente, una función f(n) está en Θ(g(n)) si y solo si está tanto en O(g(n)) como en Ω(g(n)).
- En términos más simples, Θ(g(n)) indica que la función f(n) crece de manera asintóticamente similar a g(n) a medida que n tiende hacia el infinito.
- Por ejemplo, si un algoritmo tiene una complejidad temporal de Θ(n), significa que el tiempo de ejecución del algoritmo es proporcional a n para tamaños de entrada lo suficientemente grandes, ni más rápido ni más lento.

When we have the same complexity for worst and best case, we can call that the complexity is 

1. **Divide y Vencerás (Divide and Conquer)**:
    
    - Esta estrategia implica dividir un problema en subproblemas más pequeños, resolverlos de manera independiente y luego combinar las soluciones para obtener la solución final.
    - Ejemplos comunes incluyen el algoritmo de ordenamiento rápido (QuickSort) y el algoritmo de búsqueda binaria.
2. **Programación Dinámica (Dynamic Programming)**:
    
    - La programación dinámica es una técnica utilizada para resolver problemas de optimización mediante la división del problema en subproblemas solapados, resolviendo cada subproblema solo una vez y almacenando su solución para su uso futuro.
    - Ejemplos incluyen el algoritmo de la mochila (Knapsack) y el cálculo de la secuencia de Fibonacci.
3. **Algoritmos Voraces (Greedy Algorithms)**:
    
    - Los algoritmos voraces seleccionan la mejor opción en cada paso con la esperanza de encontrar una solución óptima para el problema global.
    - Ejemplos incluyen el algoritmo de Prim para encontrar el árbol de expansión mínima y el algoritmo de Dijkstra para encontrar el camino más corto en un grafo ponderado.
4. **Algoritmos de Retroceso (Backtracking)**:
    
    - Estos algoritmos se utilizan para encontrar soluciones sistemáticamente a problemas computacionales, explorando todas las posibles configuraciones hasta encontrar una solución.
    - Ejemplos incluyen el algoritmo de las N reinas y la generación de permutaciones.
5. **Búsqueda y Exploración de Grafos (Graph Search and Traversal)**:
    
    - Estas estrategias implican explorar estructuras de datos gráficas para encontrar información específica, como caminos más cortos, ciclos o componentes conectados.
    - Ejemplos incluyen la búsqueda en profundidad (DFS) y la búsqueda en amplitud (BFS).
6. **Ramificación y Poda (Branch and Bound)**:
    
    - Esta técnica se utiliza para resolver problemas de optimización y búsqueda exhaustiva mediante la exploración sistemática de las soluciones candidatas y el descarte temprano de aquellas que no conducen a una solución óptima.
    - Ejemplos incluyen el algoritmo de búsqueda de camino más corto en un grafo ponderado y el algoritmo de viajante de comercio (Traveling Salesman Problem).