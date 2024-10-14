Es un apuntador generico, podemos almacenar a cualquier dato y con cast podemos obtener el tipo original.

## Matriz de apuntadores genericos
Esto lo podemos ver como una forma de guardar datos de cualquier tipo en una matriz.

Se necesita un tripe apuntador ya que ahora no estamos guardando datos si no que apuntadores al dato generico.

void *** matriz;

Se realiza de la misma manera que una matriz dinámica, primero la memoria para las filas

	//Memoria para las filas
matriz=(void *** )  malloc( sizeof(void*** )* filas);

	//Memoria para las columnas a las que apunta cada fila 
for(int i=0; i<filas; i++)
{
	matriz[i]= (void**) malloc(sizeof(void** ) * columnas);
}

El ultimo apuntador es donde guardaremos nuestros datos, podemos ver la estructura de la siguiente forma:
- Void *** : Filas que apunta a las columnas
- Void ** : Columnas que apuntan a los datos genericos
- Void * : Apunta a los datos a guardar 
