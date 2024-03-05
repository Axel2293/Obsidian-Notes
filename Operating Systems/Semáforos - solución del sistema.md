Herramienta de sincronización que provee el sistema operativo que no requiere espera ocupada
Un semáforo S es una variable que, aparte de la inicialización, solo puede acceder por medio de 2 operaciones atómicas y mutuamente exclusivas.
![[Pasted image 20240305131337.png]]
Para evitar espera ocupada: cuando un proceso tiene que esperar, se *pondrá en una cola de procesos bloqueados esperando un evento*.
![[Pasted image 20240305131426.png]]
- Cuando u proceso debe esperar a un semáforo S, se bloquea y se pone en la **cola del semáforo S**.
- La operación **signal** quita (con la política FIFO) un proceso de la cola S y lo pone en la cola de listos para poder pasar a ejecución

# Semáforos binarios
- Solo puede tener dos valores, 0 y 1.
- En windows se llaman mutex
![[Pasted image 20240305131913.png]]
![[Pasted image 20240305131939.png]]
Estas instrucciones deben de ser *atómicas*, para que no puedan ser interrumpidas a media ejecución.
# Semáforos generales/entero
- Pueden tomar muchos valores positivos.
### Negativos
Cuando llegamos aun numero negativo significa que hay procesos esperando en el semáforo.
![[Pasted image 20240305132555.png|300]]
![[Pasted image 20240305132612.png|400]]

- SI contador es mayor o igual que 0, el numero de procesos que pueden ejecutar wait(S) sin que se bloqueen es = contador.
- Si contador<0, el número de procesos que están esperando en el semáforo es =|contador|
#### Primitivas
![[Pasted image 20240305133028.png|300]]
![[Pasted image 20240305133109.png]]

*Contador* es el número de procesos que pueden ejecutar wait(S) sin que se bloqueen.
*Bloqueados* el número de procesos que están esperando en el semáforo.