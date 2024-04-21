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
## Remplazo de páginas
Prevenir la sobre-asignación de memoria
- Modificando la rutina de fallos de página para incluir el remplazo de páginas
Bit de modificado
- Reducir la sobrecarga de transferencia de páginas
- Solo las páginas modificadas se escriben en disco
El remplazo de páginas completa la separación entre memoria lógica y memoria física
- Memoria virtual más grande que la memoria física.

### Politicas de reemplazo
- Bloqueo de marcos:
	- Hay páginas que no deben salir
	- Páginas del núcleo del SO
	- Estructuras de control
	- Buffers de E/S
	- El bloqueo de consigue asociando un bit de bloqueo a cada marco.
- Política óptima:
	- Selecciona para reemplazar la página que esperará más tiempo hasta que se produzca la referencia siguiente. *ESTO ES IMPOSIBLE DE IMPLEMENTAR*
- **LRU**
	- Remplaza la página de memoria que no ha sido referenciada desde hace más tiempo.
	- Esta seria la página con menor probabilidad de ser referenciada en un futuro
	- Etiquetar cada página con el momento de su última referencia.
- **FIFO**
	- Primera en entrar, primera en salir.
		- Los marcos de un proceso como un buffer circular
		- Muy sencilla de implementar
		- Se remplaza la página que ha estado más tiempo en la memoria.
		- Estas páginas pueden necesitarse de nuevo y en un tiempo muy corto.
		- Puede suceder la anomalía de *Belady*
- **CLOCK**
	- ![[Pasted image 20240421132932.png]]
	- Organizar los marcos de forma circular.
	- Bit de uso: indica si esa pagina esta siendo referenciada
	- Apuntador al sig marco
### VS
- El rendimiento de FIFO es relativamente pobre

# Asignación de marcos
## Fija
- Asignación equitativa
	- Ejemplo: si son 100 marcos y 5 procesos, dale a cada uno 20 marcos
- Asignación proporcional
	- Asignar de acuerdo al tamaño del proceso
	- ![[Pasted image 20240421160537.png]]
	- ![[Pasted image 20240421160546.png]]
## Por Prioridad
- Usar un esquema de asignación proporcional *usando prioridades en vex de tamaño*.
- Si el proceso pi ocasiona un fallo de página
	- Selecciona uno de sus marcos para remplazarlo
	- Selecciona un marco de un proceso con menor prioridad
# Trashing (Hiperpaginación)
- Si un proceso no tiene suficientes marcos
	- La tasa de fallos de página es muy alta: mucha E/S
	- El sistema Operativo cree que es necesario incrementar el grado de multiprogramación
	- Se agrega otro proceso al sistema
>[!summary]
>La **hiperpaginación** es cuando un proceso está demasiado ocupado leyendo y escribiendo páginas del disco.

![[Pasted image 20240421161148.png|500]]
#### ¿Por que ocurre?
![[Pasted image 20240421161253.png]]
![[Pasted image 20240421161537.png]]
M = cantidad de marcos disponibles
![[Pasted image 20240421161626.png]]