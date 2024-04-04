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