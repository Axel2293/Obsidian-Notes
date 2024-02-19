
### Heap Sort

Heap Sort es un algoritmo de ordenamiento basado en la estructura de datos del montículo (heap). Funciona transformando la lista en un montículo y luego extrayendo repetidamente el elemento máximo (para ordenar de manera ascendente) y reemplazándolo con el último elemento no ordenado.

#### Funcionamiento:

1. **Construcción del montículo**: Se construye un montículo máximo (para ordenar de manera ascendente) a partir de la lista desordenada.
    
2. **Extracción del elemento máximo**: Se extrae el elemento máximo del montículo (la raíz) y se coloca al final de la lista.
    
3. **Reajuste del montículo**: Se ajusta el montículo para que mantenga la propiedad de montículo máximo.
    
4. **Repetición**: Se repiten los pasos 2 y 3 hasta que el montículo esté vacío, lo que resulta en una lista ordenada.
    

#### Ventajas:

- Eficiente en la clasificación en lugar (no requiere memoria adicional).
- Tiempo de ejecución predecible (O(n log n) en todos los casos).
- Útil para clasificar arreglos extremadamente grandes o cuando la memoria es limitada.

#### Desventajas:

- No es estable (puede cambiar el orden relativo de elementos iguales).
- No tan rápido como algoritmos de clasificación más eficientes como Quicksort o Mergesort en la práctica.
---
