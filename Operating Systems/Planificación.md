## Alternando secuencias de ráfagas de CPU y I/O

Un proceso puede estar alternando entre el uso de cpu y las entradas y salidas.
![[Pasted image 20240208140051.png]]

![[Pasted image 20240208140236.png]]
Cuando las rafagas con mas grandes en tiempo, tienden a ser menos frecuentes.

>[!important]
>La planificación se realiza cuando un proceso pasa de listo a ejecución, cuando pasa de ejecución a bloqueado y cuando pasa de bloqueado a listo (tambien cuando un proceso termina).
>![[Pasted image 20240208141320.png]]

## Despachador (Dispatcher)
es el que *da el control del CPU* a los *procesos seleccionados por el planificador a corto plazo*.
- Cambio de contexto
- Cambio a modo Usuario
- Hacer el salto a la dirección del programa de usuario para reiniciar ese programa.



