Tenemos varias opciones para administrar Excepciones:
- *Propagar*: el metodo solo manda la excepcion para que sea manejara por otro.
- *Manejar internamente*: podemos implementar un try:catch para atrapar la excepcion.

Podemos crear nuestras propias excepciones de la siguiente forma:
```java
@SuppressWarnings("serial")
public class NegativeNumberFoundException extends Exception{
	private double negativeNumberFound;

  

	public NegativeNumberFoundException(double n){
		super("NegativeNumberFoundException");
		negativeNumberFound = n;
	}
	
	public String toString(){
		return getMessage() + "\nNegative number found: "+negativeNumberFound;
	}

}
```

### Throws
Esto nos permite definir que un metodo es suceptible a devolver una excepción.

## JVM maneja la excepción
Podemos dejar que todos nuestros metodos que pueden devolver una excepcion solamente propagen, inclusive el main, para que el JVM se encargue de manejar las excepciones.

```java
package Excepciones;

public class Main {

public static void main(String[] args) throws NegativeNumberFoundException{

	double a=1,b=2,c=3;
	//El Milib.solve cae en excepcion y la JVM maneja la excepcion
	double result = Milib.solve(a, b, c);
	
	System.out.println(result);

}

}
```

#### Ejemplo de ejecución
![[Pasted image 20230417090422.png]]
Podemos observar que la JVM marca inclucive el thread en donde esta sucedionedo la ejecicion y el stack trace de la excepcion.