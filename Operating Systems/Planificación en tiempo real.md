Procesos tiene que cumplir diferentes tiempos de terminación (deadline) y frecuencia de ejecución.

Dos soluciones:
- Un CPU más rápido
- Usar el algoritmo de planificación adecuado

Periodico
*Algo que se ejecuta cada cierto tiempo*

### Planificación adecuada
- Planificación predecible
- Permite analizar si es posible terminar tareas a tiempo
- Otro proceso no me puede quitar el procesador a menos que se garantice que podré terminar a tiempo.
Se tiene que hacer de acuerdo a:
- Tiempos requeridos de terminación
- Frecuencia de ejecución
Verificar si todas las tareas (o procesos) pueden **cumplir sus tiempos de terminación**.

## EDF - Earliest Deadline First
Poner a correr la tarea con el tiempo de termino más cercano.
Cada vez que una tarea pasa a lista:
- Comprobar si tiene deadline más corto que la tarea que tiene el procesador, si es así, hay que suspender tarea actual y poner a correr nueva tarea.
- *Prioridades dinámicas*: van cambiando las prioridades conforme avanza el tiempo.
- Tiene que estar constantemente recalculando prioridades.
## Rate Monotonic - RM
Asignar prioridad más alta a tareas con periodo más corto
