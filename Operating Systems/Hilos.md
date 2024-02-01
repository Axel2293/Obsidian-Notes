## Concepto
Es una linea de ejecución de un proceso.
## Share
Un hilo comparte con sus hilos pares:
- Sección de código
- Sección de datos
- Recursos del sistema operativo
Cada hilo debe tener su stack
## Mono-hilo
![[Pasted image 20240201150403.png]]
## Multi-hilo
![[Pasted image 20240201150417.png]]
## Procesos e Hilos
- Los sistemas operativos modernos cargan programas como procesos que tienen recursos.
- Un proceso inicia ejecutando su punto de entrada como un hilo
- Los hilos pueden crear otros hilos dentro del proceso
- Cada hilo tiene su propio stack
- Todos los hilos dentro de un proceso comparten código y segmentos de datos
![[Pasted image 20240201145842.png|300]]
### Ejemplo de programa
![[Pasted image 20240201145950.png]]

# Beneficios de los Hilos
# Hilos a nivel kérnel y a nivel usuario
## Usuario
![[Pasted image 20240201151930.png]]
- Solo existen en el contexto del usuario
- El manejo de los hilos lo hace una librería de hilos a nivel usuario.
## Kernel
![[Pasted image 20240201152547.png]]
El proceso de usuario no se tiene que encargar de la planificación de los hilos

Si tenemos un procesador con más de un nucleo, puede planificar los hilos en diferentes núcleos.