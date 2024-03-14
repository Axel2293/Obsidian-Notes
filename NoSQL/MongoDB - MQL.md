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
### Aggregation syntax
Example of how to build an aggregation query:
```NoSQL
db.collectionName.aggregate(pipeline, options)
```
- *CollectionName*: is the name of a collection
- *Pipeline*: is an array that contains the aggregation stages
- *Options*: optional parameters for the aggregation
![[Pasted image 20240307172729.png|400]]

## Match
Nos permite escoger que documentos de la colección quiero trabajar, es decir hacer un filtro.
```
db.universities.aggregate([
  { $match : { country : 'Spain', city : 'Salamanca' } }
])
```
## Group
Podemos hacer una agregación o *resumen de lo que necesitamos con los documentos*, como encontrar totales, promedios, máximos, etc.
```
db.universities.aggregate([ { $group : { _id : '$name', totaldocs : { $sum : 1 } } } ])
```
Permite crear expresiones aritméticas, booleanas, de arreglos entre otras:
Algunos operadores son:
- `$count`
- `$max`
- `$min`
- `$avg`
- `$sum`
## Unwind
Nos permite trabajar con elementos de un arreglo dentro de las agregaciones. Ya que de manera directa no se pueden usar este tipo de datos en etapas como `$group`.
*Descompone* el documento con arreglo en *multiples documentos*, cada uno por cada elemento del arreglo.
```
db.universities.aggregate([
  { $match : { name : 'USAL' } },
  { $unwind : '$students' }
])
```
## Out
Nos permite *llevar el resultado* de nuestra agregación *a una nueva colección*.
```
db.universities.aggregate([
  { $group : { _id : '$name', totaldocs : { $sum : 1 } } },
  { $out : 'aggResults' }
])
```
## Sort
Permite ordenar los resultados por un campo en específico.
```
db.universities.aggregate([
  { $match : { name : 'USAL' } },
  { $unwind : '$students' },
  { $project : { _id : 0, 'students.year' : 1, 'students.number' : 1 } },
  { $sort : { 'students.number' : -1 } }
])
```
## Limit
Si solo estamos interesados en cierta cantidad de resultados, podemos limitarlos.
```
db.universities.aggregate([
  { $match : { name : 'USAL' } },
  { $unwind : '$students' },
  { $project : { _id : 0, 'students.year' : 1, 'students.number' : 1 } },
  { $sort : { 'students.number' : -1 } },
  { $limit : 2 }
])
```
## Add fields
Podemos agregar campos al momento de hacer una agregación, a continuación agregamos el campo foundation_year a la universidad USAL.
```
db.universities.aggregate([
  { $match : { name : 'USAL' } },
  { $addFields : { foundation_year : 1218 } }
])
```

## Lookup
Nos permite relacionar documentos de más de una colección.
```python
db.universities.aggregate([
  { $match : { name : 'USAL' } },
  { $project : { _id : 0, name : 1 } },
  { $lookup : {
      from : 'courses',
      localField : 'name',
      foreignField : 'university',
      as : 'courses'
  } }
])
```
# Relationships
Represent how various documents are logically related to each other. Relationships can be modeled via *Embedded* and *Referenced* approaches.
## Embedded relationship
Single document, can obtain data from one query. But if document keeps growing (in size) could cause *read/write performance degradation*.

# Create an Index
Support efficient execution of queries in MongoDB. If your application is repeatedly *running queries on the same fields*, you can create an index on those fields to *improve performance* for those queries.
```python
# With the number 1 we indicate
db.users.createIndex({name:1})
```
# Index scan
MongoDB creates a balanced binary tree and every index has a pointer to its living position in memory. *Left* are less than and *Right* are greater than.![[Pasted image 20240314081359.png]]
## Time complexity
The *time complexity* is
- O(log2n)

# Text Search
Searching for partial text entries may be useful, especially if we can index those searches


