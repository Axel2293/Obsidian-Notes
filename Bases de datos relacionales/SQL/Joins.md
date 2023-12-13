- `INNER JOIN`: Returns records that have matching values in both tables
- `LEFT JOIN`: Returns all records from the left table, and the matched records from the right table
- `RIGHT JOIN`: Returns all records from the right table, and the matched records from the left table
- `CROSS-FULL JOIN`: Returns all records from both tables

![[Pasted image 20231025183937.png]]

En SQL de Microsoft (específicamente en el sistema de gestión de bases de datos Microsoft SQL Server), los JOINs son operaciones que se utilizan para combinar datos de múltiples tablas en una consulta. Estos JOINs son fundamentales para realizar consultas complejas y obtener información de varias tablas relacionadas. A continuación, se describen los tipos de JOINs comunes en SQL Server:

### INNER JOIN:
   - El INNER JOIN devuelve solo las filas que tienen coincidencias en ambas tablas.
   - Ejemplo:
     ```sql
     SELECT clientes.Nombre, pedidos.Producto
     FROM clientes
     INNER JOIN pedidos ON clientes.ID = pedidos.ClienteID;
     ```
### LEFT JOIN (o LEFT OUTER JOIN):
   - El LEFT JOIN devuelve todas las filas de la tabla izquierda (primera tabla mencionada) y las filas coincidentes de la tabla derecha (segunda tabla mencionada). Si no hay coincidencias en la tabla derecha, se devuelven valores NULL.
   - Ejemplo:
     ```sql
     SELECT empleados.Nombre, proyectos.Nombre
     FROM empleados
     LEFT JOIN asignaciones ON empleados.ID = asignaciones.EmpleadoID
     LEFT JOIN proyectos ON asignaciones.ProyectoID = proyectos.ID;
     ```

### RIGHT JOIN (o RIGHT OUTER JOIN):
   - El RIGHT JOIN es similar al LEFT JOIN, pero devuelve todas las filas de la tabla derecha y las filas coincidentes de la tabla izquierda. Si no hay coincidencias en la tabla izquierda, se devuelven valores NULL.
   - Ejemplo:
     ```sql
     SELECT departamentos.Nombre, empleados.Nombre
     FROM departamentos
     RIGHT JOIN empleados ON departamentos.ID = empleados.DepartamentoID;
     ```
### FULL JOIN (o FULL OUTER JOIN):
   - El FULL JOIN devuelve todas las filas de ambas tablas, incluyendo filas que no tienen coincidencias en la otra tabla. Cuando no hay coincidencias, se devuelven valores NULL.
   - Ejemplo:
     ```sql
     SELECT estudiantes.Nombre, calificaciones.Nota
     FROM estudiantes
     FULL JOIN calificaciones ON estudiantes.ID = calificaciones.EstudianteID;
     ```

### CROSS JOIN:
   - El CROSS JOIN combina todas las filas de la primera tabla con todas las filas de la segunda tabla, creando un producto cartesiano. No se utilizan condiciones de igualdad en este tipo de JOIN.
   - Ejemplo:
     ```sql
     SELECT empleados.Nombre, departamentos.Nombre
     FROM empleados
     CROSS JOIN departamentos;
     ```

Estos son los tipos de JOINs más comunes en Microsoft SQL Server. La elección del tipo de JOIN depende de los datos y las necesidades de la consulta. Al comprender cómo funcionan estos JOINs, puedes escribir consultas efectivas para recuperar la información requerida de bases de datos relacionales.