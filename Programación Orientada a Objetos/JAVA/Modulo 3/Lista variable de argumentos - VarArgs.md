Permite tener un arreglo de argumentos variables sin tener que declarar cada argumento.

```java
// Declaración
	public static void method(int ... numbersArr){
		....
	}
	```
De esta forma tendremos la posibilidad de ingresar una cantidad no definida de elementos como argumento.

## Limitaciones
- Para poder tener VarArgs el argumento *int ... arr* debe de ser el último del método.
```java
	//No valido
	public static void method(int ... numbers1, int ... numbers2)
	public static void method(int i, int ... numbers, double x)
	
	//Si valido
	public static void method(int i, double d, float ... floats)
```

### Longitud
POdemos usra *array.lenght* para obtener la cantidad de argumentos en el arreglo.
