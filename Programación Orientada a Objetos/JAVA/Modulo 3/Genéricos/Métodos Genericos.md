Alguno de sus *argumentos* es **instancia de una clase generica**. Normalmente esa clase generica de argumento es una ***colección genérica***. El tipo de dato del argumento suele ser una ***interfaz generica***.

### Ejemplo

#### 1
Esta funcion imprime los elementos de una coleccion de tipo list, haciendo uso de polimorfismo. Este metodo podra imprimir stacks, ArrayList o LinkedList.
```java 
//Esta funcion imprime la lista que contiene datos genericos de tipo ?
public static void print(List<?> list){
	...
}
```
![[Pasted image 20230507211925.png]]

#### 2
```java 
// Esta funcion regresa la frecuencia de cierto elemento en una coleccion,
// al aceptar collecciones, no nos podemos mover por indices, asi que usemos un for each para ciclar entre los elementos
public static <type> int frequency(Collection<type> collection, type object){
	
}
```
![[Pasted image 20230507213530.png]]

#### 3
```java
//Esta funcion devuelve el numero mas grande de una colleccion, y acepta que los datos guardados en la coleccion sean sub-clases de Numbers
public static double greatestNumber(Collection<? extends Number> collection)
```
![[Pasted image 20230507214205.png]]

## Modificadores
#### Wildcard
- \<*?*\> sin limite: puede ser cualquier tipo de ***Clase***
- \<*?* **extends** ***Class***\> limite superior: tiene que ser una derivacion de ***Class***
- \<*?* **super** ***Class***\> limite inferior: no puede ser una clase derivada de ***class***, solo *padre*.

#### Forzar el tipo para toda la funcion
POdemos forzar algun tipo mediante el \<***type***\>  antes del tipo de dato que regresara la funcion, aqui tambien podemos aplicar wildcards.
```java
	public void <type> int Funcion(Collection<type> collection, type object);
```