Muchas veces podemos encontrarnos con problemas al hacer un cast a alguna clase, para evitar eso hacemos uso de las clases genericas, que permiten la defincion del tipo de clase que se usara en la declaracion:

```java
public class GDrawer<Type> {  
	private Type objectInside = null;  
	
	public void put(Type o) {  
		if (this.objectInside == null)  
			this.objectInside = o;  
	}  
	
	public Type peek() {  
		return this.objectInside;  
	}  
	
	public Type remove() {  
		Type tmp = this.objectInside;  
		this.objectInside = null;  
		return tmp;  
	}  
}
```

>[!info]
>Una clase genérica solo acepta otras clases, esto significa que no se acepta* int, double, float, char* en su forma OOP, pero si se acepta *Integer, Double, Float, Char*.

La clase *GDrawer* permite almacenar un objeto cualquiera y para crear una instancia de esta clase almacenadora la definimos de la siguiente forma:
```java
GDrawer<String> gdrawer1 = new GDrawer<String>();
// Desde Java 7: Type inference
GDrawer<String> gdrawer1 = new GDrawer<>(); 
```

#### Clase generica para guardar mas de un dato
Podemos ir agregando tipos a *<T1,T2,T3...>* y estos seran aceptados por la clase.
```java
public class BiDrawer<T, U> {  
	private T object1 = null;  
	private U object2 = null;
	  
	public void put1(T o) {  
		if (this.object1 == null)  
			this.object1 = o;  
	}  
	public void put2(U o) {  
		if (this.object2 == null)  
			this.object2 = o;  
	}  
	
	public T peek1() {  
	return this.object1;  
	} ...  
}
```