Son clases que solamente permiten tener una instacia. Para hacer posible este debemos de tener un constructor privado y un método estático que solamente haga uso de atributoas estáticos.

Si por ejemplo tenermos la clase Singletone
```java
public class Singleton {

private static Singleton instance = null; 
public static Singleton getInstance() { ... }

        private int x = 0;
        private Singleton() { ... }
        public void incX() { this.x ++; }
        public intgetX() { return this.x }

}
```
Ahi en donde tenemos el atributo estático para guardar un objeto de la clase Singletone vamos a guardar el unico que van a poder crear.