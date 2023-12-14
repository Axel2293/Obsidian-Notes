Encapsulamiento es muy importante en POO

### Kernel
Es el corazón de muchos sistemas operativos, Linux es un kernel que se utiliza, por ejemplo, en Ubuntu, MacOS, etc.
#### Libreria
funciones de las cuales no te tienes que preocupar por la inmplementación.
Un ejemplo muy sencillo es la implementación....

## Comandos Linux
- ls : List dirs and docs in the current route
- ls -i : Find specific files
- mkdir \<name\>: Crear un directorio
- rmdir \<name\>: Borrar directorio
- rm -r \<name\>: Borrar directorio
- file: tells info about file


## Memory segments
- STACK: memory managed by the program.
- HEAP: memory managed by the programmer (malloc, calloc).
## Seg fault
Error para proteger los datos cuando se intenta acceder a valores más allá del stack de memoria.
#### Local vars
Local vars only exist in their context because they get assigned on the stack, and when the execution of the function is finished, all of the stack segment of that function gets disassociated.

Thats why we should use the heap if we want to move result between functions.
## stdint.h
Library that provides more data types like
- int32_t: Signed 32 bits integer
- int8_t: 8 bits
- uint8_t : Unsigned 8 bits integer
- uint16_t : 16 bits 

#### Var names
Use the fist letter as capital:
```c
int Puntero
```


## Linked List with repeated references to other nodes
If there are LL that have nodes that point to same references that other lists we could cause a memory leak if we delete nodes and the value doesn't get deleted.

- Create a copy of the value so that every list has a reference to a unique value.
- Every node has a value that counts the references that its in.

## Contenedores intrusivos
Anchors point to other anchors on a Node. Anchors can only point to other anchors of their same level.
```c
struct Node{
	int value;
	struct Anchor a1;
	struct Anchor a2;
}

struct Anchor{
	struct Anchor *next;
}
```

### offsetof()
We can get the amount of bytes that we have to move from the start pointer to get to a certain position.

### Padding
We could add some vars to prevent the padding on the structures.