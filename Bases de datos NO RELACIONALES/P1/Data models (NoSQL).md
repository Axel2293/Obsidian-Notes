A data model organizes data elements and standardizes how its elements relate to one another.
It explicitly *determines the structure of the data*, and shows *how data is used* for achieving *specific goals*.
The most popular types od NoSQL database models are:
- *Documents* databases
	- Store data as documents, not limited to JSON
- *Key-value* stores
	- Build data collections with records that are identified with unique keys for easy retrieval.
- *Wide-column* databases
	- Use the tabular format of relational databases yet allow a wide variance in how data is named and formatted in each row, even in the same table.
- *Graph* databases
	- Use graph structures to define the relationships between stored data points.
## Denormalization
Copying the same data into multiple documents/tables in order to simplify or optimize query processing into a particular model.
Query data volume Vs Total data volume
- Processing complexity vs Total data volume
- Key-value
- Documents
## Aggregation
Leverage soft schema
*Most NoSQL dbs do not place constraints on values.* Allows to form classes of entities with complex internal structures ( *nested entities and to vary the structure of particular entities).*

Minimize one-to-many relationships, so reduces the joins
- Key value
- Documents
## Application side Joins
*Joins are not often supported in NoSQL*.     Often handled at designed time as opposed to RDBM where joins are handled at query execution time.

- Key value stores
- Document Databases
- Graph Databases
