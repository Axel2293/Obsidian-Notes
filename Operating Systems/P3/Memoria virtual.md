Separación de la memoria lógica de usuario de la memoria física.

- Solo una parte del programa necesita que esté en memoria para su ejecución.
- El espacio de direcciones lógico puede ser más grande que el espacio de direcciones físico
- Se necesita permitir que las páginas salgan y entren (Memoria a disco y disco a memoria)
![[Pasted image 20240421124909.png]]
>[!warning]
>LRU (Least Recently Used). Es la forma en la que se remplazan los marcos cuando se traen otros para su uso.

# Paginación por demanda
Traer página a memoria solo cuando se necesita
- Menos E/S necesaria
- Menos memoria requerida
- Respuesta más rápida
- Más usuarios
### Bit de presente
![[Pasted image 20240421125747.png]]
Durante la traducción de direcciones, si el bit de presente es 0, entonces hay un fallo de página.
#### Fallo de página
La primera referencia a un página siempre ocasiona una excepción llamada fallo de página.
- El SO busca en otra tabla para decidir
	- Si es una referencia inválida, abortar
	- Solo es que no está en memoria
- Obtener un marco vacío
- Guardar la página en un marco
- Restaurar tablas, bit de presente = 1
- Instrucción de reinicio: LRU
>[!important]
>Alcance local -> de el proceso
>Alcance Global -> de todos los procesos

>[!important] 
>Cuando se hace *remplazo* o **swap**, nos referimos a que una página pasa de* memoria principal* a **secundaria** y otra pagina pasa de *secundaria* a **principal**.
##### Rendimiento por demanda
- Tasa de fallos de página 0<=p<=1.0
	- If p=0 no fallos de página
	- if p=1, cada referencia es un fallo
- Tiempo de Acceso Efectivo (EAT)
	- EAT = (1-p) x tiempo_accesos_a_memoria + p(sobrecarga del fallo de página + [escribir página a disco] + cargar página del disco + sobrecarga por reinicio)
	- Ejemplo:

