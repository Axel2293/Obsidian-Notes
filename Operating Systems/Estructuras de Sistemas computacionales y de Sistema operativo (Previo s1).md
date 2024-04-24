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


![[Pasted image 20240117170742.png]]
[![Linux | Introduction To Memory Management. – LiNuX 2 ME :)](https://linux2me.files.wordpress.com/2017/09/cpu111.png?w=1100)
#### Caching
Guardando datos de un nivel de la memoria a otro nivel superior. Ej-La cache esta copiando datos de la memoria principal.

## Proteccion de hardware
Dos modos de operación
- Protección de E/S
- Protección de memoria
Los sistemas que comparten recursos requieren sistemas operativos que aseguren que un programa no cause que otros de ejecuten incorrectamente.
Proveen hardware para soportar diferencias entre dos modos de operación 
- Modo usuario - ejecución por parte del usuario
- Modo supervisor - ejecución por parte del SO
##### Bit de modo
CPU: supervisor(0) - usuario(1)
#### Protección de E/S
Cuando un programa requiere acceder a E/S, debe de hacer una llamada al SO ya que esas llamadas son privilegiadas y ningun programa del usuario debería de acceder a ellos directamente.
Para acceder a los E/S el programa hace una *llamada al sistema*.
![[Pasted image 20240117171531.png]]

#### Protección de memoria
No queremos que el usuario pueda acceder a los siguientes sitios de memoria:
- Al menos para la tabla de vectores de interrupción y rutinas de servicio de interrupción.
- Se añaden dos registros para determinar el rango de direcciones que un programa puede accesar
	- Registro base
	- Registro limite
- Memoria fuera del rango esta protegida.

![[Pasted image 20240117172736.png]]
## Llamadas al sistema
#### Registros
![[Pasted image 20240117171912.png]]
#### En una tabla en memoria
![[Pasted image 20240117172154.png]]
#### Stack
![[Pasted image 20240117172237.png]]