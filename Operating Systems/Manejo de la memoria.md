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
