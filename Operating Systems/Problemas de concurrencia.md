 ## Soluciones
 - Software
 - Hardware
 - Operación del sistema

### Por Software
#### Intento 1
No funciona
![[Pasted image 20240227162022.png]]
#### Intento 2
No funciona, mantenemos dos flags.
![[Pasted image 20240227162132.png]]
#### Intento 3
No funciona, similar al 2
![[Pasted image 20240227162220.png]]
#### Intento 4
Funciona
![[Pasted image 20240227162342.png]]
### Livelock
Los dos procesos intentan dejar pasar al otro a su CS pero ninguno pasa o tarda bastante en tomar esa desición.
the general definition only states that a specific process is not progressing.

# Dekker algorithm
Keep two flags and one variable turn.
![[Pasted image 20240227162946.png]]
# Peterson

![[Pasted image 20240227172206.png]]

# El panadero o algoritmo de ticket
Este algoritmo mantiene un sistema de tickets, cada proceso toma un ticket dependiendo de el máximo en el arreglo number (puede darse caso de race condition).  
![[Pasted image 20240229170654.png]]

# Soluciones por software
### Desventajas
Los procesos que están solicitando entrar en su sección crítica están en espera ocupada 
- Consumiendo tiempo del procesador.
![[Pasted image 20240229173024.png]]
Están pasando entre listo a ejecución, lo cual consume tiempo de CPU.
# Soluciones por hardware
### Inhabilitación de interrupciones
Esto monopoliza el procesador, ya que cuando un proceso/trabajo entra a su *CS* no se puede sacar de ahí hasta que termine, por lo cual los otros deben de esperar a que termine
![[Pasted image 20240229173237.png]]
### Instrucciones máquina especiales
