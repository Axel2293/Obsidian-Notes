
/ Ejemplo de una clase de un rectangulo, que contiene metodos e información dentro de el.
```java
public class Rectangle {  
    public double height = 1.0;  
    public double base = 1.0;  
  
    public double area(){  
        return base * height;  
    }  
  
    public double perimeter(){  
        return 2 *(base+height);  
    }  
  
    public void print(){  
  
        System.out.println("Rectangle with base: "+ base +" Height: "+ height);  
    }  
}
```

/Ejemplo de la creación del objeto a partir de la clase y de como utilizar sus metodos o atributos.
```java
public class TestRectangle {  
    public static void main(String[] args){  
        Rectangle r1 = new Rectangle();  
        System.out.println("Area: "+r1.area());  
    }  
}
```


## Clase
Podemos ver una clase como un molde que define los atributos que tendra un objeto.
![[Pasted image 20230213080946.png]]
##### UML
![[Pasted image 20230213081121.png]]

## Objeto
Es una instancia de una clase, osea fue creado a partir de un molde/clase.
- Podemos crear arreglos de objetos como los tipos de dato.
- Un objeto lo podemos ver como un apuntador, si este cambia a apuntar a otro objeto el anterior sigue existiendo, pero no se libera o destruye.

```java
//Espacio para 5 objetos de tipo Rectangle
Rectangle [] arrRect = new Rectangle[5];

arrRect[0]=new Rectangle();
arrRect[1]=new Rectangle();

arrRect[0].print();
```

## Modificadores
Permiten controlar desde donde se pueden acceder a ciertas cosas.

#### Private
Esto nos permite tener atributos que solo son accesibles dentro de la misma clase donde esta creada o declarada.
#### Public
Esto permite acceder desde cualquier lado a lo que se difinió o declaro, osea que si es un atributo de un objeto, este podra ser accedido desde fuera del mismo.


## Garbage Collector
Permite eliminar elementos a los que ya nada está apuntando, en java no existe una forma como en c para desalocar memoria.

## Constructores
Es un método que se ejecuta a ala hora de la creación de un objeto, no spermite ejecutar algo antes de la creación inicial del objeto, osea antes de qe el objeto este disponible para el uso.
Ejemplos de usos del constructor:
![[Pasted image 20230216065256.png]]
Ejemplo de constructor en la clase Rectangle para mandar la base y la altura, esto va dentro de la clase como si fuera un método más pero necesita tener el mismo nombre que la clase.
```java
public Rectangle(double x, double y) {  
    setBase(x);  
    setHeight(y);  
}
```

## Clase Object
Cualquier objeto que creamos a partir de una clase hereda directamente de la Clase Object tambien.
![[Pasted image 20230216073606.png]]

Ahi podemos ver como nuestro objeto r1 tiene todos los métodos de la clase objeto.

#### Sobre escribir los metodos de Object
Para sobreecribir los metodos heredados de la clase object debemos de hacer lo llamado como **Method Overriding**, simplemente debemos de crear un método con el mismo nombre, misma firma y con eso nuestro propio método sera el sustituto al de la clase Object

#### This
Con this podemos hacer referencia a la dirección de memoria del objeto que le damos.