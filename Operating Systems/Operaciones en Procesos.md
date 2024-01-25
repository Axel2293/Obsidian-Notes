## Creación de procesos
Los procesos padres crean procesos hijos..
- Estos hijos pueden crear otros procesos
![[Pasted image 20240125160738.png|500]]

## Llamadas al sistema
#### Comando fork(); 
En C podemos usar el comando fork(); para poder crear un nuevo proceso, esta función *regresa un entero* *siendo=0 cuando estamos en el proceso hijo* y *diferente de cero en el padre* (PID del hijo). En el caso de error regresará -1.
![[Pasted image 20240125161132.png|300]]

- Los procesos solo comparten el código
	- Solo tienen permisos de lectura y ejecución
- Cada proceso tiene su segmento de datos y stack
	- No se comparten variables locales ni globales
	- No se comparten recursos como archivos, dispositivos, etc.
![[Pasted image 20240125161900.png|200]]
fork() duplica el especio de datos y stack haciendo que cada proceso tenga su propio almacenamiento local

El código (binario o instrucciones) se comparte con el padre de forma segura.
#### Comando clone();
- Permite especificar que queremos compartir y que no
- Para controlar que se comparte
- Llamada de *más bajo nivel*
- fork() llama a clone(), o sea fork está implementado usando clone

#### Comando wait();
Mediante este comando podemos poner el proceso en espera hasta que termine uno de los procesos hijos
![[Pasted image 20240125163322.png|400]]
#### Comando exit();
POdemos terminar un proceso 