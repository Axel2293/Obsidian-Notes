Busqueda de categorias en intervalos determinados

n = numero de datos
N.C = Numero de clases -> Agrupación
### Regla de Devore
N.C = sqrt(n), n <= 100
### Regla de Sturges
N.C **≈** 1+3.322 log(n)


***VM*** = valor mayor
***Vm*** = valor menor
***R*** = rango = VM - Vm
***A*** = Amplitud = R/N.C. (Siempre debe ser un entero)

| Clase | L.I     | L.S      | M.C           | Conteo | f   | fac | fr  | fr% |
| ----- | ------- | -------- | ------------- | ------ | --- | --- | --- | --- |
| 1     | Vm -1   | L.I1 + A | (L.I1+L.S1)/2 |        |     |     |     |     |
| 2     | L.S1 +1 | L.I2 + A | (L.I2+L.S2)/2 |        |     |     |     |     |
| 3     | L.S2+1  | L.I3 + A | (L.I3+L.S3)/2 |        |     |     |     |     |
| 4     |         |          |               |        |     |     |     |     |
| 5     |         |          |               |        |     |     |     |     |
| 6     |         |          |               |        |     |     |     |     |
| 7     |         |          |               |        |     |     |     |     |


