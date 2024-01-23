## Concepto
Un sistema operativo ejecuta una variedad de programas:
- Sistemas por lotes - trabajos
- Sistemas de tiempo compartido - programas de usuario o tareas
Los términos usados *trabajo y proceso* se refieren a *lo mismo*

*Es un programa en memoria (virtual)*, puede estar en ejecución, o listo para ejecutarse
Un proceso consta de:
![[Pasted image 20240123141844.png|300]]
![[Pasted image 20240123151549.png]]
#### Diagrama de estados de un proceso
![[Pasted image 20240123142147.png|500]]
![[Pasted image 20240123142328.png|500]]
![[Pasted image 20240123142240.png|500]]
![[Pasted image 20240123142619.png|500]]
![[Pasted image 20240123142826.png|500]]

### PCB (Process Control Block)
Es una estructura de datos que contiene información asociada con cada proceso.
![[Pasted image 20240123143256.png|200]]

## Planificación de los procesos
![[Pasted image 20240123143824.png|600]]
tenemos dos Procesos, en donde el primero se interrumpe y el SO guarda el estado en el PCB de ese proceso, cuando sale de esa pausa se toman los datos de la PCB y regresa para ser ejecutado.

### Colas de procesos

*Cola de procesos listos*: Procesos que residen en memoria principal
![[Pasted image 20240123144244.png]]
*Cola de dispositivos*: Procesos que esperan un dispositivo de E/S
![[Pasted image 20240123144641.png]]
![[Pasted image 20240123144934.png]]
#### Planificadores
*Planificador a largo plazo*
![[Pasted image 20240123145240.png|250]]
- Planificador de tareas
- Selecciona que procesos se llevan a la cola de listos
- Se invoca con poca frecuencia
	- Segundos o minutos
	- Puede ser lento
- Controla el grado de multiprogramación
*Planificador a corto plazo*
![[Pasted image 20240123145321.png|250]]
- Planificador del CPU
- Selecciona que proceso debe ser el próximo en ejecutarse y otorgársele el CPU
- Se invoca con mucha frecuencia
	- Milisegundos
	- Debe ser rápido

### Cambio de contextos
Cuando el sistema operativo decide cambiar el CPU para ejecutar otro proceso, el sistema debe:
- Guardar el contexto de el proceso antiguo
- Cargar el contexto almacenado del proceso nuevo
El cambio de contexto es sobrecarga
- El sistema no hace trabajo útil mientras se hace el cambio
El tiempo depende del soporte del hardware
###### Program Status Word
Se guarda en el stack al hacer una interrupción

