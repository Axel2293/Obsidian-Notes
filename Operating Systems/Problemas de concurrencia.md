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
Los proceso