This is an interface on the java.util library, this collection is the base for other containers.
This collection is capable of storing elements of type E.
![[Pasted image 20230420091908.png|300]]
>[!warning]
>The next containers are interfaces and inherit from the collection interface, so they are not implemented.
## List 
Collection of elements that can be accesed with an index.
![[Pasted image 20230420094407.png|200]]

The following are implementations of the interface:
#### *ArrayList*
Array that changes size as needed.
#### *LinkedList*
Doubly linked list 
#### *Vector*
Synchronized ArrayList
##### *Stack*
FIFO structure
## Queue
Collection of elements where only the oldest or the one with the most priority can be accesed.
![[Pasted image 20230420094431.png|200]]

#### *PriorityQueue*

### Deque

![[Pasted image 20230423231645.png]]

##### *ArrayDeque*
Only lets the acces to the firs element or the last one.

##### *LinkedList*
Doubly linked list. Bipolar as it is a list and a queue

## Set
Collection of elements that can not store repeated elements.
![[Pasted image 20230420094606.png|200]]

### *HashSet*
uses hash code to do fast search.
### *LinkedHashSet*
Uses hash code and is linked, so it respects the order in wich the elements are added.
### *TreeSet*
Balanced tree. Respects the natural order of the elements.