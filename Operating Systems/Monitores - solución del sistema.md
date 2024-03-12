# Monitores
Son estructuras de un lenguaje de programación que ofrecen una funcionalidad equivalente a los semáforos y son más fáciles de controlar.
Un monitor es un *tipo de objeto* que tiene la característica de que *solo un proceso puede estar ejecutando* cualquiera de sus métodos.
- Otro procesos que haya invocado al monitor quedará bloqueado mientras espera a que el monitor esté disponible.

## Funciones para operar las colas de condición
### Cwait(condición)
- Suspende la ejecución del proceso llamado bajo la condición
- El monitor está disponible para ser usado por otro proceso
### Csignal(condición)
- Reanuda la ejecución de algún proceso suspendido por un cwait con la misma condición
- Si hay vario procesos, elige uno de ellos
- Si no hay ninguno, no hace nada
	- Esto hace que el signal se pierda, ya que, si no hay nada esperando, no se hará nada.
## Problema productor/consumidor con monitores
![[Pasted image 20240312170549.png]]
![[Pasted image 20240312170609.png]]
#