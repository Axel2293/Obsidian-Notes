## Final
#### Para atributos
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

#### Para métodos
Cuando un método tiene el modificador final significa que en nungún momento se le podra hacer override, osea, sobreescribir el método con otro.
```java
public class A {  
	    public final int method() {
	    : }
}
    
public class B extends A {  
	    public int method() { // no es válido
```


#### Para clases
Una clase final no puede tener clases derivadas:
```java
//Clase final
public final class String { 
...
}
//Agregando una subclase
public class SuperString extends String { // No es válido
    ```
    
## Static
#### Para atributos
En un atributo el modificador static hace que esa variable sea la misma para todos los objetos creados de la misma clase, esto solo aplica para variables dentro de la clase, no dentro de métodos.

En resumen, un atributo static es una localidad compartida de memoria de la clase. Si uno de los objetos cambia el valor de la variable, el valor cambiará también para los demás objetos.

#### Para métodos
Un método static depende de los argumentos que le dan y de los atributos static de una clase.
Si es public podemos invocar el metodo de la siguiente forma:
```java
Clase.Method(args...);
```


#### Para constructor
Se ejecuta uan sola vez en la creacion de la clase. Los atributos o métodos que se utilicen ahí deben ser static.

### Protected