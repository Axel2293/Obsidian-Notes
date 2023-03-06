![[Pasted image 20230305184251.png]]
![[Pasted image 20230305184424.png]]

### Cadena vacia
![[Pasted image 20230305184500.png]]
![[Pasted image 20230305184537.png]]
### Longitud de una cadena
![[Pasted image 20230305185217.png]]

### Operadores  +, * ,  U , ∩ 
![[Pasted image 20230305185227.png]]
![[Pasted image 20230306102605.png]]
- El que tiene asterisco incluye a todo el conjunto de posibles combinaciones, incluyendo al vacio.
- El que tiene suma no incluye an vacio

#### Asterisco
![[Pasted image 20230306102907.png]]
#### Suma
![[Pasted image 20230306102827.png]]


![[Pasted image 20230305185441.png]]
![[Pasted image 20230305185552.png]]

### 5 tupla AFD
![[Pasted image 20230305190058.png]]
##### Diagrama de transiciones
![[Pasted image 20230305190129.png]]

### Validar con un AFN
![[Pasted image 20230305191048.png]]

Tiene que haber por lo menos un estado final en el conjunto de estados posibles para que sea valida y al procesar una letra debemos de obtener el resultado de todos los estados posibles y  hacemos union para evaluarlos con la siguiente letra. 
![[Pasted image 20230305191059.png]]
Tiene a q2 en el conjunto de estados posibles asi que si es valido

### Conversion AFN a AFD
![[Pasted image 20230305191857.png]]
![[Pasted image 20230305191432.png]]
Iniciamos con el estado final y vamos tomando los conjuntos de estados y volvemos a evaluar juntando las posibilidades.

Todos los conjuntos con los estados finales se convierten en finales.
![[Pasted image 20230305191733.png]]
Renombramos los estados y hacemos el diagrama de transiciones, los caminos se juntan de todos los estados que quedaron juntos, ose a puntan al mismo estado y son apuntados por los mismos estados.
![[Pasted image 20230305191801.png]]

### Validacion de un AFN
![[Pasted image 20230305192126.png]]

### Validacion de un AFD
![[Pasted image 20230305192145.png]]

## e-closure
![[Pasted image 20230305192513.png]]

![[Pasted image 20230305192519.png]]

![[Pasted image 20230305192557.png]]
Cuando validamos una cadena usando eclosure debemos aplicare eclosure a cada conjunto de estados que obtenemos, luego en base a esos estados evaluamos la siguiente letra o simbolo y repetimos el eclosure.

### Minimizar AFN
![[Pasted image 20230305192753.png]]
- Importancia de la minimización
	- El automata es más eficaz y rápido ya que en vez de existir dos o más estados quivalentes, se reduce a uno que engroba a todos y funciona de la misma manera.
- Que significa estados equivalentes
	- Los estados equivalentes son ya que dado la misma entrada la salida será la misma.
- Aplicación de estados equivalentes
	- Redución de estados o caminos posibles y optimización del autómata.
![[Pasted image 20230305192943.png]]
#### Creamos la tabla
![[Pasted image 20230305192858.png]]
Eliminamos el primero en las filas y el ultimo en las columnas

#### Marcar los estados que sean(no final, final)

![[Pasted image 20230305193023.png]]

En este punto debemos de revisar todos los pares restantes

![[Pasted image 20230305193115.png]]

En este caso uno de los conjuntos es no valido a si que lo tachamos (No final, final), por lo tanto (B,A) no puede ser minimizado asi que lo tachamos tambien.

![[Pasted image 20230305193228.png]]

Despues de verificar la primera pasada la tabla queda asi
![[Pasted image 20230305193329.png]]

Ahora debemos volver a verificar los pares no tachados para estar seguros de que algun estado del que es dependiente no haya sido tachado

![[Pasted image 20230305193503.png]]
Aqui al volver a verificar (G,A) es descartado al tener dos estados derivados tachados.

![[Pasted image 20230305193618.png]]
Despues de verificar todos la tabla queda asi, y estos si pueden ser el mismo estado
![[Pasted image 20230305193654.png]]
![[Pasted image 20230305193713.png]]