# TDAs
Son tipos de datos cuya implementación no es visible para quien utiliza el tipo de dato; desde fuera, todo lo que el usuario (programador) conoce sobre el TDA es: qué operaciones se pueden 

- Interfaz: incluye prototipos de función y tipos de datos necesarios para utilizar el TDA (.h)
- Implementación: incluye las funciones y tipos (accesibles por el usuario desde la interfaz). Datos y funciones auxiliare, qu eno son visibles para los usuarios del TDA (.c)

## ifndef y endif
Esto sirve para definir el nombre del header y evitar que vuelva a ser incluido al programa de la persona que esta usando la libreria.

## TDA String
Un string es un arreglo de chars, en si es un apuntador que apunta a donde inicia el texto. El ultimo elemento del arreglo es '\0' que indica en fin del string.

struct string
{
	char * str;
	unsigned int len;
};

