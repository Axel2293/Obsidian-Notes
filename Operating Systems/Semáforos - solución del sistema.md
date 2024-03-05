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
# Semáforos generales/entero
-Pueden tomar muchos valores positivos.
