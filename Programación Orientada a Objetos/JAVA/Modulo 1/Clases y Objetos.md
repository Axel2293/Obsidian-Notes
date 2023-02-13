
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

## Objeto
Es una instancia de una clase, osea fue creado a partir de un molde/clase.
- Podemos crear arreglos de objetos como los tipos de dato.

```java
//Espacio para 5 objetos de tipo Rectangle
Rectangle [] arrRect = new Rectangle[5];

arrRect[0]=new Rectangle();
arrRect[1]=new Rectangle();

arrRect[0].print();
```

#### Private
Esto nos permite tener atributos que solo son accesibles dentro de la misma clase donde esta creada o declarada.

#### Public
Esto permite acceder desde cualquier lado a lo que se difinió o declaro, osea que si es un atributo de un objeto, este podra ser accedido desde fuera del mismo.