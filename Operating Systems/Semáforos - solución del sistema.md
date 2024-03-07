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

- SI *contador >= 0*, el numero de procesos que pueden ejecutar wait(S) sin que se bloqueen es = contador.
- Si *contador<0*, el número de procesos que están esperando en el semáforo es =|contador| 
#### Primitivas
![[Pasted image 20240305133028.png|300]]
![[Pasted image 20240305133109.png]]

*Contador* es el número de procesos que pueden ejecutar wait(S) sin que se bloqueen.
*Bloqueados* el número de procesos que están esperando en el semáforo.

# Problema del productor- consumidor
Paradigma de procesos cooperantes, el productor produce información que se consume por un consumidor.
- Uno o más productores general cierto tipo de datos (registros, caracteres) y los sitúan en un buffer.
- El único consumidor saca elementos del buffer de uno en uno
- El sistema está obligado a impedir la superposición de operaciones sobre el buffer.
### Solución con semáforo general entero
El consumidor espera a que el productor genere un elemento y manda una señal para desbloquear al consumidor.
![[Pasted image 20240307163125.png]]
![[Pasted image 20240307163146.png]]
![[Pasted image 20240307163154.png]]
#### Buffer limitado
Contamos con un semáforo que indica cuantos espacios en el buffer quedan disponibles para poder generar elementos.
Cuando el productor termina de producir (ya no hay mas espacio en buffer), espera a que el consumidor haga un signal(e) para indicar que ya tomo un elemento.
La sección crítica es wait(s); tomar; signal(s);. Esto indica que mientras se produce, no se puede consumir el contenido.
![[Pasted image 20240307163342.png|500]]
![[Pasted image 20240307163406.png|400]]
![[Pasted image 20240307163432.png|400]]
#### Problema de la barbería
Para esta solución, tenemos 3 barberos, un sillon de espera, una sala de espera y una caja de cobro.
Podemos utilizar los semáforos para cada estado en el que puede estar un barbero o el cliente.
![[Pasted image 20240307164341.png|500]]
![[Pasted image 20240307164518.png]]
![[Pasted image 20240307164545.png|500]]
![[Pasted image 20240307164559.png|500]]
El cliente entra si hay capacidad disponible en la tienda, espera en el sofá y luego pasa a la silla del barbero para que le corten el pelo. 
![[Pasted image 20240307164733.png|500]]
![[Pasted image 20240307164745.png|500]]
Tenemos un problema aqui, ya que los barberos deben de cobrar, por lo cual deben de dejar de cortar pelo para cobrar. *Como los semáforos tienen una cola*, cuando terminan estarán saliendo los que están al inicio de la cola y no el que realmente termino rápido.
![[Pasted image 20240307165451.png]]
En esta imagen el cliente que duro 10 mins terminó, así que se hace un signal para sacarlo de la cola, pero el que sale es el de 60 minutos que todavía no ha terminado.
Para solucionar esto, cada cliente tendrá su semáforo *terminado*
![[Pasted image 20240307165748.png|500]]
Cuando un cliente entra a la tienda, se le asigna un numero único. Con este número podremos identificar su semáforo de terminado.
![[Pasted image 20240307165846.png|500]]

