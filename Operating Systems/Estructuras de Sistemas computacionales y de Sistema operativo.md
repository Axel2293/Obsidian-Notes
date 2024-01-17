El sistema operativo es un administrador de recursos. La podemos ver como una maquina ampliada y mediante esta el programador no necesita saber detalles del hardware.
![[Pasted image 20240117164845.png]]
![[Pasted image 20240117165029.png]]
## Monoprogramacion
Hace que el procesador solo pueda ejecutar un programa a la vez, asi que si un programa espera a un E/S, el CPU permanece sin hacer nada.
## Multiprogramacion
Permite al procesador ejecutar otro programa mientras un programa debe esperar por un dispositivo de E/S.
![[Pasted image 20240117165213.png]]
#### Requisitos
- Planificacion del cpu
	- Escoger un proceso para ejecutar entre varios que estan listos para ejecucion.
- Manejo de la memoria
	- Asignar memoria a los procesos que los demandan
- Rutinas de E/S provistas por el sistema
	- Controlan el acceso a los dispositivos de Entrada/Salida
	- Facilitan la programacion de aplicaciones.
- Asignacion de dispositivos
	- Asignar los dispositivos a los procesos que los demandan.




## DMA (Direct Memory Access)
Para transferir datos entre dispositivos de E/S y memoria sin intervencion del CPU. Es un controlador.

![[Pasted image 20240117170137.png]]
![[Pasted image 20240117170205.png]]
![[Pasted image 20240117170216.png]]

## Jerarquia de memoria
Mientras mas rapida, mas cara.

Registros