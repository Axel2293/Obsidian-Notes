|            | STACK                  | QUEUE              | LIST                          | Priority Queue                         |
| ---------- | ---------------------- | ------------------ | ----------------------------- | -------------------------------------- |
|            | Arreglo-Lista enlazada | Arr-Lista Enlazada | Arr-Lista Doblemente Enlazada | Arr no ord, Arr ord, Monticulo binario |
| Inserción  | push **θ**(1)          | **θ**(1)           | add **θ**(1)            Insert(i)**θ**(n-i) **θ**(i)                  | **θ**(1) Ω(1)/O(n) O(log(n))                                       |
| Consulta   | peek **θ**(1)          | **θ**(1)           | get(i) **θ**(1) **θ**(i)                              | **θ**(n) **θ**(1) **θ**(1)                                       |
| Extracción | pop **θ**(1)           | **θ**(1)           | Reove(i) **θ**(n-i) **θ**(i)                              | **θ**(n) Ω(1)/O(n) O(log(n))                                       |
| Size       | **θ**(1)               |                    |                               |                                        |
