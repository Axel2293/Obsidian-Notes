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
