Se utiliza para definir una plantilla a seguir por las subclases: obliga a las derivaciones a implementar ciertos métodos.

Es una buena practica a gregar métodos abstractos, que no hacen nada y que luego son sobreescritos por los métodos especificos de cada clase derivada.

### Operador abstract

Este método tendra que ser implementado en todas nuestras clases derivadas
```java
public abstract double area();
```

#### En una clase
una clase abstract no se puede instanciar, solo sirve como una plantilla para subclases que se deriven de esta, ya que esta obliga a que los herederos implementen ciertos métodos declarados con el modificador abstract.
```java
public abstract class Shape3D{
	//Plantilla
	public abstract void metodoImplementar();
}
```
Aun asi podemos utilizar una variable de la clase para guardar instancias de las subclases.
```java
Shape3D instance= new sphere3D();
```

#### En un método
En un método el modificador abstract hace que este sea una plantila de método, solo especifica el nombre, los argumentos, lo que regresa, pero no el codigo o la implementación.
