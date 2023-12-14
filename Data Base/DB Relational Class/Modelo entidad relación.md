Diseñar y explicar modelos que representen de forma clara elementos de una organización, así como sus relaciones.

- **Entidad**: 
	- Objeto identificable que existe en una organización.
		- **Clase**: Estructura
		- **Instancia**: Valores de los atributos
	- **Atributo**: 
		- Describe características de la entidad
	- **Identificadores**:
		- Nombran o identifican instancias
	- **Relaciones**: 
		- Las entidades se pueden asociar con otras mediante relaciones.

### Entidad relación
Atributos multivalor y compuestos

**Identificadores únicos**
- Relación con la entidad
- Independiente de la entidad

Identificadores compuestos, dos o más atributos.

SKU(Stock keeping unit) en artículos. El SKU es un código para rastrear productos, manofactura y información del precio. Se usan para llevar un registro de inventario y de ventas.

### UPC - Código universal de producto
- Mismo código sin importar quien lo venda
- Crea un código de 12-13 dígitos
- Se crean bajo estándares que se registran en sitio
![[Screenshot 2023-08-30 at 2.46.36 p.m..png]]


## Relaciones: Entidades se asocian con otras mediante atributos
![[Screenshot 2023-08-30 at 2.47.53 p.m..png]]

La primera es de **grado 2** o binaria y la segunda es de **grado 3**.

***Grado***: número de clases de entidades involucradas

### Relaciones binarias comunes
##### Relación 1:1 (Uno a uno)
A un empleado se le asigna un automóvil y un automóvil correcponde a un empleado.
![[Screenshot 2023-08-30 at 2.52.25 p.m..png]]
##### Relación 1:M (Uno a muchos)
En una residencia puden habitar n estudiantes.
![[Screenshot 2023-08-30 at 2.55.40 p.m..png]]
##### Relación N:M (Muchos a muchos)
Un estudiante puede participar en M talleres y un taller puede tener N estudiantes.
![[Screenshot 2023-08-30 at 2.56.12 p.m..png]]

#### Cardinalidad
- Máxima: Valor que puede tomar la relación.
- Mínima: Menor cantidad de instancias de entidades permitidas en relación.

#### Relación recursiva
Esto entre entidades de su misma clase.
![[Screenshot 2023-08-30 at 3.01.25 p.m..png]]

Adecuadas para representar jerarquias.
*Ejemplos*:
- JUAN SU JEFE ES PEDRO  
- PEDRO SU JEFE ES MARIA  
- MARIA NO TIENE JEFE
- ANA SU JEFE ES PEDRO RAUL SU JEFE ES MARIA
![[Screenshot 2023-08-30 at 3.26.39 p.m..png]]
![[Screenshot 2023-08-30 at 3.26.56 p.m..png]]

## Modelado Entidad relación
- Identificar objetos (Algo que existe) = Entidades
- Características de esos objetos = Atributos
- Relaciones entre esos objetos (1:1, 1:M, N:M, Recursiva).