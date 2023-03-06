![[Pasted image 20230305184251.png]]
![[Pasted image 20230305184424.png]]

### Cadena vacia
![[Pasted image 20230305184500.png]]
![[Pasted image 20230305184537.png]]
### Longitud de una cadena
![[Pasted image 20230305185217.png]]

### Operadores  +, * ,  U , ∩ 
![[Pasted image 20230305185227.png]]

![[Pasted image 20230305185441.png]]
![[Pasted image 20230305185552.png]]

### 5 tupla AFD
![[Pasted image 20230305190058.png]]
##### Diagrama de transiciones
![[Pasted image 20230305190129.png]]

### Validar con un AFN
![[Pasted image 20230305191048.png]]

Tiene que haber por lo menos un estado final en el conjunto de estados posibles para que sea valida
![[Pasted image 20230305191059.png]]
Tiene a q2 en el conjunto de estados posibles asi que si es valido

### AFN a AFD
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

#### 