Mediante este tipo de clases podemos crear objetos especificos sin la necesidad de tener un archivo por separado, ya que la podemos crear justo donde instanciamos la clase. 

Debemos de utilizar una interfaz para que ya tengamos una platilla de métodos a implementar.

![[Pasted image 20230330075520.png|600]]

La clase Flyable es una interfaz.
```java
//Declaramos el objeto kite e implementamos todos los métodos abstractos de la interfaz

Flyable kite = new Flyable() {

	public void rise() { ... }  
	public void descend() { ... } 
	public double getHeight() { ... }

};
```

>[!tip] Clase anonimaa
>En realidad, kite es una instancia de una clase anonima, kite no implementa directamente la interfaz, si no que lo que se escribe pasa a la clase anonima y esta se vuelve una implementacion de Flyable.



