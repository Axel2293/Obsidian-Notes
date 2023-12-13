Las formas normales son reglas de diseño en la teoría de bases de datos que ayudan a organizar los datos de manera eficiente y a evitar problemas de redundancia y anormalidades en la base de datos. Hay diferentes formas normales (de la primera a la quinta), y cada una de ellas establece ciertos requisitos que deben cumplirse para que una base de datos se considere en esa forma normal. Aquí te proporcionaré una breve descripción de las tres primeras formas normales con ejemplos:

### Primera Forma Normal (1NF):
   - Requisito: Cada atributo en una tabla debe contener un solo valor atómico, es decir, no debe contener valores multivaluados ni compuestos.
   - Ejemplo: Supongamos que tenemos una tabla llamada "Estudiantes" con un atributo "Materias" que almacena múltiples materias en una sola celda. Para cumplir con 1NF, debemos dividir este atributo en varias columnas, como "Materia1", "Materia2", etc., para que cada celda contenga una sola materia.

### Segunda Forma Normal (2NF):
   - Requisito: Debe cumplirse con 1NF y, además, todos los atributos no clave deben depender completamente de la clave principal.
   - Ejemplo: Consideremos una tabla "Pedidos" con los atributos "Número de Pedido" (clave principal), "Producto" y "Cantidad". Para cumplir con 2NF, debemos dividir esta tabla en dos: una tabla "Pedidos" con "Número de Pedido" y "Producto" como atributos, y otra tabla "Detalles de Pedido" con "Número de Pedido" y "Cantidad" como atributos.

### Tercera Forma Normal (3NF):
   - Requisito: Debe cumplirse con 2NF y, además, no debe haber dependencias transitivas entre los atributos no clave y la clave principal.
   - Ejemplo: Supongamos que tenemos una tabla "Empleados" con los atributos "ID de Empleado" (clave principal), "Nombre del Empleado" y "Nombre del Departamento". Si el nombre del departamento depende solo del ID de departamento (y no del ID de empleado), debemos crear una nueva tabla "Departamentos" con el ID de departamento y el nombre del departamento, y en la tabla "Empleados", solo almacenar el ID de departamento en lugar del nombre del departamento.
