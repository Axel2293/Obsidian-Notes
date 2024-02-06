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

# Modelos multihilos
- Muchos a uno
- Uno a uno
- Muchos a muchos
### Muchos a uno
Muchos hilos a nivel usuario mapeados a un hilo a nivel Kérnel.
Usado en sistemas que no soportan hilos a nivel de kérnel.

### Uno a uno
- Cada hilo a nivel usuario corresponde a un hilo del kérnel
![[Pasted image 20240201153515.png]]
### Muchos a muchos
![[Pasted image 20240201153547.png]]

## Arquitectura multi-hilo de Solaris

- Los procesos tienen un hilo principal más hilos a nivel usuario
- Proceso ligero es un hilo de ejecución en un proceso. Un proceso ligero corresponde a un hilo a nivel kernel.
![[Pasted image 20240201153945.png]]

# Hilos en Posix
Un hilo posix tiene:
- Un identificador (TID)
- Us stack
- Una prioridad de ejecución
- Una dirección de inicio de ejecución
Los hilos son dinámicos cuando se pueden crear en cualquier momento de la ejecución
### Crear hilo
Mediante la función `int pthread_create(pthread_t *thread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)`

### Terminar hilo
Mediante la función `void pthread_exit(void *value_ptr)`

### Esperar desde hilo principal
Podemos esperar a que terminen los otros hilos mediante la función `int pthread_join(pthread_t thread, void **value_ptr)`

>[!abstract]
>Create: *pthread_create* Terminate: *pthread_exit* Wait: *pthread_join*

>[!warning]
>Cuando el hilo principal termina, todos los hilos hijos tambien (aunque no hayan terminado).

