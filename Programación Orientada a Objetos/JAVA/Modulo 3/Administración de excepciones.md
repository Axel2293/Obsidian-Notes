tenemos varias opciones para administrar Excepciones:
- Propagar:
- Manejar internamente:

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