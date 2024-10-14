## Proceso
- Instancia de un programa 
	
## Organización de la memoria
- Generalmente se hace en segmentos y varia por sistema operativo
	
Memory loayout win(32)
- Stack: Estructura LIFO, Invocación de funciones (stack frame), variables locales.
- Heap: Memoria Dinámica
- Program Image: Codigo, datos globales y recursos no ejecutables.
	- .text 
	 - .data
	 - .rscr
- DLLS: Librerias dinámicas
- TEB(s): Librerias dinámicas
		
# Segmentos:
### Data:
- Variables globales y estáticas.
- Variables globales y estáticas inicializadas.
- El espacio en memoria se encuentra asignado durante toda la ejecución.
### Stack:
- Politica FILO
- Memoria estática
- Gestionada por el sistema operativo
- Variables locales y stack frames
- Fundamental para el uso de funciones recursivas
### Heap: 
- Memoria dinámica
- Gestionada por el usuario
- Acceso a la memoria desde cualquier función
	
# Malloc
Esta función recibe la cantidad de byte que necesitamos y regresa una dirección de memoria que nos asignó. Aqui trabajamos con el segmento *HEAP*.

##### Syntaxis: 
```c
void malloc(size_t size);
```


Malloc regresa un tipo de dato void , asi que es obligatorio hacer cast(int  \*), (char  \*), (float \*)
>[!info]
Si regresa 0 es probablemente por falta de memoria.

## Calloc()
Esta función inicializa la memoria que ocupamos en ceros, es lo mismo que malloc pero sobre-escribe lo que hay en la memoria con 0.

## Free()
Esta función libera memoria que ya tenemos asignada

Arreglos
	- Para obtener la memoria consecutiva debemos de pedir la cantidad de bytes que tendrá el arreglo.
	
