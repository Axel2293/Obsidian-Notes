## Wildcard
Permite obtener una lista de los archivos con un patron determinado, es de ayuda para obtener la lista de, por ejemplo, nuestros archivos fuente src.
## Patsubst
Nos sirve para crear sustituciones de patrones en cadenas.

## Referencias a dependecias de reglas
Podemos usar $^ para hacer referencia a las dependencias de una regla sin tener que escribirla de nuevo y con $< hacermos referencia a la primera dependencia de una regla.

## Referencia al target
Podemos usar $@ para hacer referencia al target o resultado de la regla.