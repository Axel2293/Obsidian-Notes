Los procedimientos almacenados en Microsoft SQL Server son objetos de base de datos que contienen una serie de instrucciones SQL predefinidas y que se almacenan en el servidor de bases de datos. Los procedimientos almacenados se utilizan para realizar tareas específicas y complejas en la base de datos. A continuación, te proporciono un apunte sobre cómo crear, los diferentes tipos de procedimientos almacenados, ejemplos y cómo ejecutarlos.

**Creación de un procedimiento almacenado:**

Para crear un procedimiento almacenado en SQL Server, puedes utilizar SQL Server Management Studio (SSMS) o ejecutar una consulta SQL. Aquí hay un ejemplo simple de creación de un procedimiento almacenado:

```sql
CREATE PROCEDURE NombreDelProcedimiento
AS
BEGIN
    -- Instrucciones SQL aquí
END
```

**Tipos de procedimientos almacenados en SQL Server:**

1. **Procedimientos almacenados sin parámetros:** No requieren ningún parámetro de entrada.

2. **Procedimientos almacenados con parámetros:** Pueden recibir uno o varios parámetros de entrada que se utilizan en la lógica del procedimiento.

3. **Procedimientos almacenados de salida:** Pueden devolver valores como resultado, generalmente utilizando la instrucción `RETURN`.

4. **Procedimientos almacenados de tabla:** Devuelven conjuntos de resultados en lugar de valores escalares.

**Ejemplo de un procedimiento almacenado con parámetros:**

Supongamos que deseas crear un procedimiento almacenado que reciba el nombre de un cliente y devuelva sus pedidos:

```sql
CREATE PROCEDURE ObtenerPedidosPorCliente
    @NombreCliente NVARCHAR(50)
AS
BEGIN
    SELECT PedidoID, FechaPedido, Total
    FROM Pedidos
    WHERE Cliente = @NombreCliente;
END
```

**Cómo ejecutar un procedimiento almacenado:**

Puedes ejecutar un procedimiento almacenado de varias formas:

1. Utilizando SSMS:
   - Abre SSMS y conéctate a tu base de datos.
   - Ejecuta el procedimiento almacenado con la instrucción `EXEC` o `EXECUTE`.
   ```sql
   EXEC NombreDelProcedimiento;
   ```

2. Desde una aplicación:
   - Puedes ejecutar un procedimiento almacenado desde tu aplicación mediante el uso de ADO.NET, Entity Framework u otras tecnologías de acceso a bases de datos.

3. Mediante un lenguaje de programación:
   - Algunos lenguajes de programación permiten ejecutar procedimientos almacenados utilizando bibliotecas y controladores de bases de datos específicos.

En resumen, los procedimientos almacenados en SQL Server son herramientas poderosas para organizar y ejecutar lógica de base de datos de manera eficiente. Puedes crear procedimientos almacenados para realizar tareas específicas y ejecutarlos según sea necesario desde aplicaciones, SQL Server Management Studio o código de programación.