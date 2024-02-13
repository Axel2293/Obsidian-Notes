|            | STACK                  | QUEUE              | LIST                          | Priority Queue                         |
| ---------- | ---------------------- | ------------------ | ----------------------------- | -------------------------------------- |
|            | Arreglo-Lista enlazada | Arr-Lista Enlazada | Arr-Lista Doblemente Enlazada | Arr no ord, Arr ord, Monticulo binario |
| Inserción  | push **θ**(1)          | **θ**(1)           | add **θ**(1)            Insert(i)**θ**(n-i) **θ**(i)                  | **θ**(1) Ω(1)/O(n) O(log(n))                                       |
| Consulta   | peek **θ**(1)          | **θ**(1)           | get(i) **θ**(1) **θ**(i)                              | **θ**(n) **θ**(1) **θ**(1)                                       |
| Extracción | pop **θ**(1)           | **θ**(1)           | Reove(i) **θ**(n-i) **θ**(i)                              | **θ**(n) Ω(1)/O(n) O(log(n))                                       |
| Size       | **θ**(1)               |                    |                               |                                        |
Ordenamiento basado en comparaciones su peor caso no puede ser mejor que cuasi-lineal $n log(n)$

## Counting sort

Utilizamos los elementos como indices para mantener frecuencias. Lo cual nos permite no usar comparaciones y mantener una tipo tabla hash para las frecuencias de cada elemento.
![[Pasted image 20240213095224.png]]

Para que este algoritmo sea estable, debemos calcular el indice de cada grupo de elementos (donde va el ultimo elemento), luego leemos el arreglo original de derecha a izuierda y vamos agregando en los indices que calculamos 