Is a NoSQL (non-relational) DB designed to store and query data as **JSON-like** documents.

Its easier for developers since you can use same 

#### Use cases
Catalogs, user profiles, content management.

*Content management*: Each entity that the application tracks can be stored as a single document. It will provide on intuitive way to interact with it and changes to the data model can be applied only to those who requires it. Schemas are not updates and therefore no DB downtime.

*Catalogs*: An example could be an e-commerce application, each product have different attributes, this could be an issue for RDMS if you try to store each of those as a column. Easy management and faster reading speed.

# Mongo DB
Available since 2009, it consumes JSON-like documents.
Supports range query and regular-expression searches.
![[Pasted image 20240226080238.png]]
MongoDB is a CP because of *Consistency* and *Partition Tolerance*.
### Collections
### Query interfaces
Mongo Compass: a *GUI* for querying, aggregation and analyze through a visual environment.
Mongo shell: a shell environment for interacting with MongoDB deployments.
Programming language drivers: Available for languages such as C#, Go, Java, Perl, PHP, Python, Ruby, Scala, JavaScript, etc.
