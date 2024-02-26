Is a NoSQL (nonrelational) DB designed to store and query data as **JSON-like** documents.

Its easier for developers since you can use same 

#### Use cases
Catalogs, user profiles, content managment.

*Content management*: Each entity that the application tracks can be stored as a single document. It will provide on intuitive way to interact with it and changes to the data model can be applied only to those who requires it. Schemas are not updates and therefore no DB downtime.

*Catalogs*: An example could be an e-commerce application, each product have different attributes, this could be an issue for RDMS if you try to store each of those as a column. Easy management and faster reading speed.
