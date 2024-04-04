Las tablas hash permiten implementar *diccionarios* y *conjuntos* debido a que permiten tener un sistema rápido para verificar si un a **llave** existe mediante el cálculo de un **código hash** que nos indicar una dirección en donde están los datos. 
<*llave*, *valor*>

### Hashing

### Manejo de colisiones
Debemos amntener el *codigo hash* en un rango [0...M-1] donde **M** es un número menor que el número de permutaciones de la entrada (N)
>[!danger]
>a dos claves diferentes les corresponde el mismo índice -> colisión

