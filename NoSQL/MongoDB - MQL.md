```bash
docker run --name mongo_axel -p 27017:27017 -d  mongo

// Enter mongo shell
docker exec -it mongodb mongosh
```
MongoDB queries are based on JavaScript.
Allows to create
- *Databases*
- **Collections**
- *Insert* and *select* data
### Create collection
When a collection is first referenced in a command it gets created, this method is primarily for creating new collections with *specific options*.
```MQL
db.createCollection(name,options)
```
### Create elements
*Create* or *Insert* operations add new documents to a collection. If the collection does not currently exist, insert operations will create the collection.
#### Methods
```MQL
db.collection.insertOne()
db.collection.insertMany()
```
![[Pasted image 20240229225922.png]]

### Read elements
*Read* operations retrieve documents from a collection; i.e query a collection for documents.
MongoDB provides the following methods to read documents from a collection.
```MQL
db.collection.find()
```
![[Pasted image 20240229230252.png]]

### Update elements
Update operations modify existing documents in a collection. MongoDB provides the following methods to update documents of a collection.

```MQL
db.collection.updateOne()  
db.collection.updateMany()  
db.collection.replaceOne()
```
![[Pasted image 20240229230511.png]]

### Delete elements
Delete operations remove documents from a collection. MongoDB provides the following methods to delete documents of a collection.
```MQL
db.collection.deleteOne()  
db.collection.deleteMany()
```
![[Pasted image 20240229230604.png]]

# Operators
1. **Operadores de Comparación**:
    - `$eq`: Igual a un valor especificado.
    - `$ne`: No igual a un valor especificado.
    - `$gt`: Mayor que un valor especificado.
    - `$gte`: Mayor o igual que un valor especificado.
    - `$lt`: Menor que un valor especificado.
    - `$lte`: Menor o igual que un valor especificado.
    - `$in`: Igual a cualquiera de los valores especificados en un arreglo.
    - `$nin`: No igual a ninguno de los valores especificados en un arreglo.
2. **Operadores Lógicos**:
    - `$and`: Realiza una operación lógica AND en un arreglo de expresiones.
    - `$or`: Realiza una operación lógica OR en un arreglo de expresiones.
    - `$not`: Niega una expresión booleana.
    - `$nor`: Realiza una operación lógica NOR en un arreglo de expresiones.
3. **Operadores de Elemento**:
    - `$exists`: Verifica si un campo existe o no en un documento.
    - `$type`: Verifica el tipo de datos de un campo.
4. **Operadores de Evaluación**:
    - `$expr`: Permite utilizar expresiones de agregación en consultas.
    - `$jsonSchema`: Valida un documento contra un esquema JSON.
    - `$mod`: Realiza una operación de módulo en un campo especificado.
    - `$regex`: Realiza una coincidencia de expresión regular en un campo.
5. **Operadores de Array**:
    - `$all`: Verifica si un arreglo contiene todos los elementos especificados.
    - `$elemMatch`: Selecciona documentos que coinciden con los criterios especificados en al menos un elemento de un arreglo.
    - `$size`: Verifica el tamaño de un arreglo.
6. **Operadores de Bitwise**:
    - `$bit`: Realiza operaciones bitwise (AND, OR, XOR) en un campo numérico.
7. **Operadores de Proyección**:
    - `$`: Proyecta el primer elemento de un arreglo para coincidencias en consultas.
    - `$elemMatch`: Proyecta solo los elementos de un arreglo que coinciden con los criterios especificados en al menos un elemento del arreglo.
# Aggregation
Is a way of processing a large number of documents in a collection by means of *passing them through different stages*. The stages make up what is knows as a **pipeline**.
The **stages in a pipeline** can *filter, sort, group, reshape and modify documents* that pass through the pipeline.
### Use cases
One of the most common use cases of Aggregation is to *calculate aggregation values* for *groups of documents*.
This is similar to the basic aggregation available in SQL with the GROUP BY clause and COUNT, SUM and AVG functions
MongoDB Aggregation goes further through and can also perform *relational-like joins*, *reshape documents*, *create new and update existing collections*, and so on.
![[Pasted image 20240307171857.png]]

- The *input* can be a single collection, where others can be merged later down the pipeline
- **$match**: filters those documents we need to work with, those that fir our needs.
- **$group**: does the aggregation job
- **$sort**: sorts the resulting documents the way we require (*ascending or descending*)

## Aggregation syntax
Example of how to build an aggregation query:
```nosql
db.collectionName.aggregate(pipeline, options)
```