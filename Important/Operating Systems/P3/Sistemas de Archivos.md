![[Pasted image 20240418154633.png]]
### Sectores físicos
Sección de la superficie del mismo que corresponde al área encerrada entre dos líneas radiales de una pista 
### Cilindro
Son todas las pistas de todas las superficies con la misma numeración
### Superficie
En cada plato hay dos superficies
## Disco desde arriba
![[Pasted image 20240418155914.png]]
>[!info]
>Tiempo de búsqueda: cantidad de tiempo requerida por la cabeza para posicionar su brazo en la pista. 
>$tiempo = Distancia/velocidad$

# Interleave
![[Pasted image 20240418161634.png]]
Cada vez que se lee un sector, este se transfiere al controlador y vuelve a dar una vuelta (casi una revolución)

![[Pasted image 20240418164007.png]]
## Particiones del disco
Con las particiones podemos tener múltiples unidades de almacenamiento lógicas en una unidad física

El Master Boot Record es un programa que, cuando arrancamos, se carga en la memoria principal. Este define y nos permite seleccionar con que sistema arrancar, o sea, transfiere el control al sistema de arranque del SO
![[Pasted image 20240418164536.png]]
![[Pasted image 20240418164708.png]]
### Cylinder, Head, Sector (CHS)
![[Pasted image 20240418164857.png]]
## Sectores lógicos
![[Pasted image 20240418165144.png]]
En este sector físico, no pertenece a ninguna partición y contiene el MBR y las tablas de particiones.
![[Pasted image 20240418165252.png]]
>[!tip]
Es mucho más fácil manejar los sectores numerados de forma lineal que de una forma tridimensional.

![[Pasted image 20240418165536.png]]
![[Pasted image 20240418165726.png]]
![[Pasted image 20240418165812.png]]
