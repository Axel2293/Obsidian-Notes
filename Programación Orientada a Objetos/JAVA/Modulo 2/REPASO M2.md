Clases
- Atributos
- Métodos
## Objetos
- Instancias (variables) de una clase

## Alcance
- Públic (métodos)
- Private (Atributos)
- Protected (herencia)

## Constructores

- se llaman igual que la clase 
- En general tienen alcance público, solo los singletone tienen constructores privados.
- JVM proporciona un constructor sin parametros por omisión
- Se sobreescribe en cuanto proporcionamos un constructor personalizado

#### Destructor
- Método con el nombre finalize
- Se usa para disponer de recursos externos como conexiones a bd, puertos de comunicación, etc.

##### This
- Referenciar al objeto que invoca el método donde uso el this.
##### Super
- Referencial a la clase padre de donde quiero utilizar algún método o atributo.

## Modificadores
- FINAL
	- Atributos: indica que el atributo se convierte en una constante
	- Métodos: indica que el método no puede ser sobreescrito por la clases derivadas
	- Clases: indica que no puede ser heredada por otra clase
- STATIC
	- atributos: indica que son compartidos por todas las instancias u objetos de esta clase.
	- métodos: indicar que depende su ejecución solo de atributos estáticos y/o de los argumentos recibidos, invocados con la nomenclatura Clase.método()

## Clase Object
Eva de todas las clases
- Métodos:
	- toString: despliega la representación del objeto, omisión presenta el nombre d ela clase incluyendo el paquete y la dirección de memoria.
	- Clone: devuelve una nueva instancia del objeto con los mismos valores en los atributos
	- equals: devuelve true si la comparación de los atributos de los objetos es igual, si no false.

## Herencia
- usamos extends "NombreClasePadre" al crear una nueva clase para indicar que esa clase será la heredera de la clase padre






