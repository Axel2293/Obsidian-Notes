Repaso 3 parcial
# Clases anonimas
Son un aforma rápida de definir una interfaz durante la ejecución, dentro de la definicion debemos de establecer los metodos que pide la interfaz. 
### Ejemplo
Uso de threads y runnable. En este ejemplo se crea la instancia anonima de la interfaz Runnable, que define el codigo que se ejecutara en el thread.
```java
// La implementacion de la interfaz esta sobre una clase anonima
Executors.newSingleThread(new Runnable(){
	@Override
	public void run(){
		//Codigo a ejecutar
	}
});
```
# Relaciones entre clases
### Asociación Uses-a
Es una relacion semántica entre dos clases, esta relación tiene un significado particular.

Dos **objetos** se *asocian* en un momento dado de su existencia, pero no son dependientes entre si.
- Puede incluir info de de multiplicidad como por ejemplo
	- Un dedo solo puede llevar 3 anillos
	- Un anillo puede estar en 0 o más dedos diferentes
	- Si se destruye un dedo, el anillo no se destruye
Por ejemplo una mano puede hacer referencia a un guante, a la hora dela mano se quita el guante, se espera que la referencia al guante no se pierda.

![[Pasted image 20230507185118.png]]

La mano guarda una referencia r a un objeto guante, por lo tanto se espera que exista una referencia r2 que apunte al guante tambien.
![[Pasted image 20230507185540.png]]
La mano al quitarse el guante pierde la referencia a l objeto, pero el guante no se pierde, inclusive si perdemos la referencia de la mano.
![[Pasted image 20230507185637.png]]

### Agregación Has-a
- Especifica relaciones entre clases y objetos del tipo: todo/partes.
- Se presenta cuando existe una clase ***Agregación*** que contiene uno o más atributos de *Componente*, donde *Componente* es una *clase*.
- La Agregacion se modela mediante un rombo del lado de la clase Agregación
![[Pasted image 20230507183412.png]]

##### Ejemplos
Podemos agregar informacion de multiplicidad en la agregación para indicar la cantidad de componentes, como por ejemplo un reloj de cierta marca puede contener *1,2,3,o 4 alarmas* y un *cronometro*
![[Pasted image 20230507183633.png]]
En la relacion podemos especificar tambien el nombre del objeto Componente y su visibilidad, en la siguiente imagen podemos observar como se traduce el codigo a una ***Agregación***.
![[Pasted image 20230507184307.png|450]]

Se pueden emplear arreglos de objetos para implementar la ***Agregación*** uno a muchos, siempre y cuando la cantidad de objetos *Componente* sea fija.
![[Pasted image 20230507184434.png]]

### API (Aplication Programmming Interface)
Es una interfaz de software con una función distintiva.
API de una casa
![[Pasted image 20230507190617.png]]

# Enums
Utiles para almacenar ***datos categóricos***. Es una clase que *almacena sus únicas instancias*.

Ejemplos de datos categóricos:
- *Estado civil* = {Soltero, casado, viudo, divorciado, unión libre} 
- *Idioma* = { Español, Inglés, Francés, Alemán, Italiano, … }  
- *IMC* = { Bajo peso, Normal, Sobrepeso, Obesidad, Carstens }  
- *Nivel* *educativo* = { Posgrado, Licenciatura, Preparatoria, Secundaria, Trump-fan }

### Ejemplo de una enumeracion con cartas
Para declarar una enumeracion lo hacemos como si se tratara de una clase, pero en vez de *class* usamos ***enum***.
```java 
	//Este enum almacena 4 tipos de carta
public enum Figura { 
	CORAZON, TREBOL, 
	DIAMANTE, ESPADA 
}
```
##### Funcionamiento
Cada elemento en la enumeración es una instancia de la clase, es decir que no se pueden crear más instancias aparte de las que estan definidas por el enum. Para ejemploficar eso podemos observar el siguiente ejemplo:

```java
public enum Figura {

    //A la hora de llamar Figura.CORAZON el nombre cambiará a "Corazon" por medio del constructor

    CORAZON("Corazon"), TREBOL("Trebol"),
    DIAMANTE("Diamante"), ESPADA("Espada");

    //Esta es la cantidad total de figuras que pueden estar en una carta
    public final static int NUM_FIGURAS=4;
    private final String nombre;
   // Constructor privado
    private Figura(String nombre)
    { this.nombre = nombre; }
	// 
    public String toString()
    { return nombre; }

}
```

Aqui se define un ***constructor privado*** que asigna el nombre de la carta a un string privado, este constructor solo es accesible por las instancias del enum y se llama a la hora de crearlas.

###### Atributos publicos
Podemos ver que el enum cuenta con un atributo publico estatico que representa cuantos elementos hay en el enum.

#### Values()
Es un metodo que regresa todos los **valores de la enumeracion** como una ***lista***

#### Ordinal()
Es un metodo que se llama desde una instancia del enum y **regresa el indice de este valor en el enum.**

# Excepciones
Se deben de seguir los siguientes pasos para el manejo de excepciones
- *Clasificar* los errores que pueden suceder
- *Informar* cuando puede suceder cada error
- ***Propagar*** el error sucedido o recibido
- ***Manejar*** el error adecuadamente

### Definir un error
POdemos crear nuestras propias **excepciones** para informar de un error. Solamente tenemos que ***extender la clase Exception***. 

En el siguiente ejemplo se crea una **excepcion para numeros negativos**, primero se crea un *atributo donde se guarda el dato erroneo o que causo el problema*, luego se crea un *constructor publico* donde se asigna el nombre de la excepcion y la inicializacion de los atributos, tambien podemos *sobreescribir el metodo toString* para definir como querremos que se muerte el error en consola
```java
public class NegativeNumberFoundException extends Exception { 
	// NUmero que causo el error
	private double negativeNumberFound; 
	//Constructor, debemos llamar a super para guardar el nombre de la excepcion
	public NegativeNumberFoundException(double n) { 
		super("NegativeNumberFoundException");  
		this.negativeNumberFound = n; } 
	
	@Override
	public String toString() { 
		return getMessage() + "\nNegative number found: " + 
		this.negativeNumberFound;} 
	}
```

### Manejar errores
Para manejar errores debemos de hacer uso de *try-chatch*, esta estructura de control permite la **ejecución de codigo bajo la espera de que un error suceda** y si esto sucede, ejecuta el codigo que le demos, dependiendo de el tipo de excepción.

#### Try - Catch
Syntaxis:
```java
try{

}
// Codigo a ejecutar en caso de
catch(Excepcion2 ex){ 
	....
}catch(Excepcion2 ex){
	....
}
```

POdemos definir multiples catch para tener casos especificos para cada error o simplemente le decimos que puede llegar una Excepcion, haciendo uso del polimorfismo ya que todas las excepciones Derivan de Exception

### Propagar errores
Propagar errores significa que no se usara un try-catch para detener el error, si no que este error se enviara a lo siguiente de la ejecución para que ese lo maneje o propague tambien.

Para propagar una excepcion nuestro metodo que puede fallar debe de avisar que podria devolver una excepcion durante la ejecucion mediante ***throws***, esto es simplemente para *informar que el metodo puede* **propagar** la excepcion ***InvalidNumber***.

Para lanzar el error debemos de primero identificar cuando ya tenemos datos erroneos y luego usar ***throw*** new InvalidNUmber(..);, esto lanzara la excepcion afuera del metodo y saldra de la ejecucion. **Para poder lanzar la excepcion** tenemos que *crear la instancia de la excepcion*, osea llamar a su constructor e inicializarla y luego lanzarla.
```java
public void metodo() throws InvalidNumber{
	if(....){
		throw new InvalidNumber(...);
	}
}
```

### RuntimeExceptions
Estas son excepciones que pueden suceder durante la ejecución del codigo como el intentar acceder a una un objeto que apunta a null (***NullPointerException***), cuando se intenta acceder a un elemento fuera de un arreglo (***ArrayIndexOutOfBoundException***), en general son errores que pueden ser evitados con una buena programación, pero tambien estas excepciones ***tienen la caracteristica de que no necesitan un try-catch para manejarlas***, cuando una función lanza la excepcion esta automaticamente se maneja y termina la ejecucion, no es necesario que el metodo avise que puede lanzar una excepción tampoco.

#### Ejemplo
```java
//Create your own exception class subclassing from Exception
class MyException extends Exception {
    public MyException(final String message) {
        super(message);
    }
}

public class Process {
	//RuntimeException - Not Checked
    public void execute() {
        throw new RuntimeException("");
    }  
    
    //Exception - Checked so needs to declare throws
    public void process() throws MyException {
        throw new MyException("Checked");
    }
}
```

# Genéricos
