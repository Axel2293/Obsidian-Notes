# ¿Qué son?
- Estructuras que contienen en sus elementos aun apuntador al mismo tipo de dato de la estructura.
- Se utilizan para guardar la direccion de la siguiente estructura y mantener un link entre ellas.
- Permite mantener estructuras e diferentes partes de la memoria, pero siempre manteniendo una relación entre ellas.

### Ejemplo
struct strNode { 
		int data;
		struct strNode * next;
}

### Tipo de dato
typedef struct strNode { 
		int data;
		struct strNode * next;
}Node;

Estructuras de datos con memoria no consecutiva
- Mantiene un link entre los datos