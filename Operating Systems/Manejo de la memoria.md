Los procesos son traidos a memoria para ser ejecutados y primero pasan por varais etapas para ser ejecutados:

## Asociación de instrucciones y datos a direcciones de memoria
Puede suceder de tres formas distintas
#### En tiempo de compilación
- Se conocen a priori las direcciones de memoria que se usarán
- Código absoluto (sin ambiguedad y todo definido)
- Debe recompilarse si cambia la dirección inicial del programa
>[!tip]
>Util cuando sabemos que usará exactamente como programas cargados en ROM.
#### En tiempo de carga
- Código relocalizable (podemos moverlo al cargarlo donde querrámos)
- Una vez cargado, no se puede mover en la memoria
#### En tiempo de ejecución
- El proceso se puede mover durante *ejecución*
- Se asignan direcciones antes de la ejecución
- Ocupa **Hardware especial**
## Carga dinámica
Una rutina no se carga hasta que es llamada
>[!abstract] 
>Una rutina no usada nunca se carga
>Útil cuando tenemos códigos grandes y no todo se usa al mismo tiempo
>Puede implementarse con diseño del programa

# Encadenamiento dinámico (dinamic linking)
El encadenamiento se hace hasta el tiempo de ejecución
#### Stub
- Pieza de código usada para localizar la rutina de libreria residente (las librerias no se incluyen en los ejecutables, solo la rutina)
- El STUB se remplaza con la dirección de la rutina, y ejecuta la rutina.
- El OS necesita checar si la rutina está en direcciones de memoria del proceso.

# Direcciones lógicas vs físicas
## Logicas
- Generada por el CPU
- También se refiere a una *dirección virtual*
## Físicas
- Direcciones vistas por la unidad de manejo de memoria (MMU-Memory Management Unit)
- Los programadores no tienen por que tener acceso a estas direcciones
![[Pasted image 20240404162723.png]]
>[!note] 
>Se podría tener hasta el doble de memoria mediante la virtual.

# Memory Management Unit MMU
Es el dispositivo de hardware que mapea *direcciones virtuales* a **direcciones físicas**.
#### Registro de relocalización
- Es un valor que se añade a cada dirección generada por un proceso de usuario a la vez que se manda a memoria
- Los programas usuario ven direcciones *lógicas*, no *físicas*
# Swapping
Es cuando un proceso puede *salir temporalmente de la memoria*
a un almacenamiento de respaldo, y luego traerse de regreso a memoria para continuar su ejecución.
¿POSIBLE SIMILITUD A CAMBIO DE CONTEXTO?
#### Almacenamiento de respaldo
- Disco grande y rápido para recuperar el progrma y hacer el swapp eficientemente.
- Se debe de hacer un intercambio de memoria tambien
![[Pasted image 20240404163359.png]]
>[!important]
>Las *tablas de vectores de interrupción* son donde se guardan las direcciones a donde se transfiere el control dependiendo de la interrupción.

# Asignación contigua
### Esquema de registro de recolocación
- **Registro base** contiene el valor de la dirección física más pequeña
- **Registro límite** contiene el rango de direcciones lógicas
>[!note]
>Cada dirección lógica de la partición debe de ser más pequeña que el Registro límite.

### Asignación de particiones múltiples
El OS mantien info sobre:
- Particiones asignadas
- Particiones libres
![[Pasted image 20240404164159.png|300]]
Se van generando huecos de memoria a la hora de que los procesos liberan las particiones y otros las ocupan.

# Partición dinámica (Algoritmos de ubicación)
## Primer ajuste
Busca desde el principio en donde puede caber el proceso que solicita y *regresa el primero que cumpla*.
## Mejor ajuste
Asigna el bloque más pequeño donde puede caber el proceso, lo cual produce fragmentos más pequeños.
## Siguiente ajuste
Asigna el siguiente bloque lo suficientemente grande donde pueda caber el proceso
## Peor ajuste
Buscar el hueco más grande donde quepa el proceso, lo cual produce fragmentos muy grandes.

# Fragmentación
Cuando la memoria se va subdividiendo y se van quedando espacios grandes o pequeños de memoria que no se pueden utilizar.
## Externa
Son los espacios que hay entre los espacios de memoria, y que causan que no tengamos memoria consecutiva disponible.
![[Pasted image 20240404165156.png|300]]
## Interna
La memoria que se queda dentro de las particiones y no es utilizada.
![[Pasted image 20240404165208.png|300]]
## Reducir
- Desplazar el contenido de la memoria para tener toda la memoria disponible en un solo bloque
- La compactación se puede hacer *solo si la recolocación es dinámica* (las direcciones se pueden calcular en tiempo de ejecución)

# Paginación
1. Se divide la *memoria física* en bloques de tamaño fijo llamados **marcos**.
	- El tamaño de los marcos es potencia de 2, usualmente entre **512** y **8192**.
	- ![[Pasted image 20240404165743.png|200]]
1. Se dividen los *procesos* en bloques del mismo tamaño llamados **páginas**
	- El espacio de direcciones lógico de un proceso puede *no estar contiguo*.
	- ![[Pasted image 20240404165839.png|200]]
### Ejecución
Si se tienen n páginas de un proceso, se necesitan n *marcos* libres para cargar el programa correctamente.
- Se necesita una tabla de páginas para traducir direcciones lógicas a direcciones físicas
- Da paso a la fragmentación interna
	- Puede haber paginas que no se utilicen en su totalidad de tamaño.
	- ![[Pasted image 20240404170138.png|250]]

## Direcciones lógicas
Se componen de:
- Número de página (*p*):
	- Se usa como un índice en la *tabla de páginas*
- Desplazamiento (*d*):
	- Cuanto se tienen que mover dentro de la página para llegar a la dirección física
![[Pasted image 20240404170618.png|500]]
### Arquitectura de traducción
![[Pasted image 20240404170829.png]]
*f* es la direccion que obtenemos de la *tabla de páginas* y nos dice cual es la dirección física de la página.
![[Pasted image 20240404171005.png]]
## Implementación de la tabla de páginas
Esta se mantiene en la **Memoria principal**.
- Page-table base register (*PTBR*)
	- Apunta a la tabla de páginas
- Page-table length register (*PTLR*)
	- Indica el tamaño de la tabla de páginas
![[Pasted image 20240404171443.png|300]]
Este esquema hace que cada acceso a datos/instrucciones necesite de dos accesos a memoria:
- Uno para la tabla de páginas
- Otro para acceder a los datos/instrucciones en la dirección física
Podemos resolverlo mediante **caché de hardware**.
- Registros asociativos o buffer de traducción adelantada (*CACHING* o **TLB** (Translation look-aside Buffer)).
## Registro asociativo
- Busqueda en paralelo
	- ![[Pasted image 20240404171958.png]]
- Traducción de direcciones (A, a)
	- Si A está en el registro asociativo
		- Obtenemos el número de marco directamente del registro
	- Si no
		- Buscar en la tabla de páginas en memoria
### Tiempo de acceso efectivo
- Búsqueda asociativa = **ε** unidades de tiempo
- Asume el tiempo del ciclo de memoria es 10 nanosegundos
- Tasa de aciertos (HIT RATE)
	- Porcentaje de veces que un numero de página es encontrado en registros asociativos
	- La tasa se relaciona con el número de registros asociativos
	- Tasa de aciertos = **α**
- Effective Access Time (EAT)
	- EAT = (10ns + **ε** )**α** + (20ns + **ε** )(1-**α**) 
	- = 20ns + **ε**-10**α**
## Paginación de dos niveles
Actualmente una dirección lógica puede ser de hasta 40 bits.
![[Pasted image 20240404172933.png]]
