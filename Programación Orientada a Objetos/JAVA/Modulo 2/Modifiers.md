## Final
Este modificador hace que no podamos cambiar el valor a partir de su primera asignación.

- Si no es inicializado en su declaración este puede ser inicializado en un constructor.
- No puede ser inicializado dentro de un método que no sea el constructor, por que eso significa que podria ser modificado varias veces durante la ejecución.

```java
//Caso 1
	public final double minBase = 0.0;
    //Constructor pero minBase ya está inicializado
    public Rectangle() {
	    minBase = 1.0;  // NO es válido: segunda asignación
    }
```

En el caso de que no este inicializado:
```java
// CASO 2
public class Rectangle {  
	public final double minBase; // Sin asignar
	public Rectangle(){
         minBase = 1.0;    // SÍ es válido: primera asignación
    }
	public Rectangle(double base, double height) {
        minBase = 2.0; // SÍ es válido: primera asignación
    }

}
```


