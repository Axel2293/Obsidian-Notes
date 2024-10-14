Podemos evitar tener que utilizar los <> al instanciar alguna clase si:
```java
//Extendemos la clase que necesitemos y definimos el tipo de dato
class StringList extends ArrayList <String>{...}
```
![[Pasted image 20230427092039.png]]


## Ejemplo con Tree-Map-Set
Para poder hacer eso nuestra clase del tipo debe de tener definida la *interfaz Comparable*, si no no podremos agregar elementos al arreglo. Por ejemplo, la clase Date no tiene implementada esa interfaz, asi que la definimos:
```java
public class Date implements Comparable<Date>{
	public int compareTo(Date o){
		//Logica de comparacion
	}
}

//Ahora si podremos definir un TreeSet de Date
TreeSet<String> dateTreeSet = new TreeSet<>();
```
![[Pasted image 20230427094224.png|300]]

