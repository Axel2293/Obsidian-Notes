>[!info]
>Todos los wrapper son subclases o hijos de la clase Number.

### Boxing
Envolver un valor primitivo dentro de una instancia de su clase envolvente o wrapper.
```java
double d1 = 156.8;  
Double D1 = new Double(d1);
Integer I1 = new Integer(640);
```
![[Pasted image 20230417092716.png]]

### Unboxing
Extraer el valor primitivo contenido en el wrapper.
```java
double d2 = D1.doubleValue();  
int i2 = I1.intValue();
```
![[Pasted image 20230417093007.png]]

## Autoboxing
(desde Java 5) realizar cualquier de las operaciones anteriores de forma implícita, es decir, sin crear objetos de forma explícita ni invocar métodos de ellos:
```java
// A double gets explicitly converted into its object form
double d1 = 156.8;  
Double D1 = new Double(d1);  
Double D1 = d1;  

// Same as the first example
Integer I1 = 640;  
double d2 = D1.doubleValue();  
double d2 = D1;  
int i2 = I1;
```

