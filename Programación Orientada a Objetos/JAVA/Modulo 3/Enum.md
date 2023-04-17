Sirve para almacenar datos categoricos. Podemos ver a cada enumeracion como una instancia que se selecciona con Figura.CORAZON.

Una enumeracion tambien es una clase y es una lista de sus unicas instancias, no hay más instancias afuera de las que estan creadas dentro de ellas.
```java 
public enum Figura{
	CORAZON, TREBOL,
	DIAMANTE, ESPADA;
}
```

Como un enum tambien es una clase podemos definir contructores y más atributos dentro de la clase:
```java
public enum Figura {
	CORAZON("Corazon"), TREBOL("Trebol"),
	DIAMANTE("Diamante"), ESPADA("Espada");
	
	private final String nombreFigura;
	private Figura(String nombre) { this.nombreFigura = nombre;}
	public String toString(){return nombreFigura;}
}
```
Dentro de este enum se definio un nombre constante para el mismo, con un contructor y con un método toString para poder ver el nombre.

Mediante la agregación de un constructor debemos de definir el argumento para cada uno de nuestras enumeraciones.
```java
	CORAZON("Corazon"), TREBOL("Trebol").....
```

## Ordinal
Regresa el index de la enumeracion actual.
```java
enum.ordinal();
```
Este nos permite saber en que elemento de la unumeracion estamos, si tenemos la instancia que hace referencia a corazon entonces nos regresara el primer elemento en el array.