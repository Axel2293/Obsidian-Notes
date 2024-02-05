a.     _c_1: costo de un movimiento entre **datos** en el arreglo o copiados de él.

b.     _c_2: costo de una comparación entre **datos** en el arreglo o copiados de él.

| Codigo | Costo | Peor caso | Mejor caso |
| ---- | ---- | ---- | ---- |
| int tmp; | 0 | 1 | 1 |
| boolean swp=false; |  |  |  |
| for (int p = 0; p < n-1; p++) | 0 | n-1 | 1 |
| for (int i = 0; i < n-p-1; i++) | 0 | n-1(n-p-1) | n-1 |
| if (array[i]>array[i+1]) | c2 |  |  |
| tmp= array[i]; | c1 |  |  |
| array[i]=array[i+1]; | c1 |  |  |
| array[i+1]=tmp; | c1 |  |  |
| if (!swp)  | 0 |  |  |
|  |  |  |  |
|  |  |  |  |
|  |  |  |  |
