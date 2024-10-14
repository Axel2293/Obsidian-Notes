## Realoc
Realoc nos permite redimensionar bloques de memoria, esto por si no queremos volver a  asignar la nueva memoria y copiar los datos.

Parametros:
	El apuntador a realocar
	La cantidad nueva de espacio

## Matrices y Memoria Dinámica
	
	type **nombre_matriz;
	Nos permite crear un arreglo de apuntadores dinámico, en este caso es para dos dimensiones

Primera dimension
	-ROW Major:
		nombre_matriz = (type**)malloc(filas * sizeof(type * ))
	-COLUMNS (r para cada fila, renglon o rows):
		nombre_matriz[r] =(type *) malloc(Columnas * sizeof(type))
		Con un ciclo for para llenar las direcciones de memoria de las columnas en las filas
	Ej:
		int ** matrix
		float ** matrix
		char ** matrix
	Este tipo de apuntadores son apuntadores a puntadores, o mejor dicho un apuntador que apunta a otro apuntador.
Funcion que regresa una matriz dinámica
	-type** ("Arguments"){}

## Matriz dinamica de apuntadores
Podemos verla de la siguiente manera
	- Apuntador->Apuntador->Apuntador
En resumen es una matriz con apuntadores que apuntan a otros apuntadores, esto nos permite usar los apuntadores void * para guardar cualquier tipo de dato.

### Matriz de apuntadores para cualquier tipo de dato
Void *** Matriz
Se necesitan tres * por que son tres apuntadores, no podemos guardar datos directamente en un tipo void ya que no es modificable.