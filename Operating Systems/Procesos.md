## Concepto
Un sistema operativo ejecuta una variedad de programas:
- Sistemas por lotes - trabajos
- Sistemas de tiempo compartido - programas de usuario o tareas
Los términos usados *trabajo y proceso* se refieren a *lo mismo*

*Es un programa en memoria (virtual)*, puede estar en ejecución, o listo para ejecutarse
Un proceso consta de:
![[Pasted image 20240123141844.png|300]]
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
*Cola de dispositivos*: Procesos que esperan un dispositivo de E/Sb n n bvat7smuj