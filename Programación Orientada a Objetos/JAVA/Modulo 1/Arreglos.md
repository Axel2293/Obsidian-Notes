```java
//Dos formas
	//1
Tipo[]..[] identificador;
int[] edades;
	//2
Tipo indentificador[]...[];
int edades[];

//  Filas | columnas
TIpo []       []
```

## Multidimensionales

```java
//Creamos el arreglo con 4 filas y columnas en null
char texto [][] = new char[4][];

//Primera fila le asignamos espacio para 6 chars o 6 columnas
texto[0]=new char[6];
//Segunda fila espacio para 3 chars o 3 columnas
texto[1]=new char[3];
```

![[Pasted image 20230209072315.png]]

## Clonar matriz
```java
//Clonar m2 a m1 en las filas
m1 = m2.clone();

for(int row=0; row<m2.lenght(); row++)
{
	m1[row]=m2[row].clone();
}

```

