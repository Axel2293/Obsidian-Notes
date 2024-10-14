Son procesos que pueden afectarse o ser afectados por la ejecución de otros procesos.
Ventajas de la cooperación de procesos:
- Intercambio de información
- Velocidad de computación
- Modularidad
### Problema del producto-consumidor
Tener un proceso que crea información(*Productor*) y otro proceso los consume (*Consumidor*)
## Comunicación entre procesos (IPC)
`IPC = inter process communication`
#### *Señales*
- Avisos que puede enviar un proceso a otro proceso.
- El OS se encarga de que el proceso que recibe la señal la trate inmediatamente.
#### *Memoria Compartida*
- Recurso compartido que provee unix a disposición de los programas para que puedan intercambiar información.
- ![[Pasted image 20240131210248.png]]
#### *Sistema de mensajes*
- Mecanismo que provee unix a disposición de los programas para que puedan intercambiar información y sincronizarse
