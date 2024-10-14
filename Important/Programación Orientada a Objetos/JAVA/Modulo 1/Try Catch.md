Forma similar que en python para evitar algún error en el programa, por ejemplo cuando se ingresan caracteres del alfabeto en vez de un numero e intentamos hacer un Parse.

### Formato
```java
try {
	// El codigo qu puede causar un error
}catch(Exception){ //El codigo del error que va a esperar
	//Acciones a realizar en caso de encontrar el error
}
```


## Concatenación de varias excepciones
Podemos tener varias salidas hacia diferentes excepciones

```java
try{
	//CODE
}catch(Exception 1){
	//CODE
}catch(Exception 2){
	//CODE
}catch(Exception 3){
	//CODE
}
```

## Excepciones 

- #### Apuntador nulo
	- NullPointerException
- #### Formato erroneo al hacer parse a un String a numero
	- NumberFormatException