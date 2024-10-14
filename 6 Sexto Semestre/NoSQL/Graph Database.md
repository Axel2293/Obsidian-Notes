It stores nodes and relationships instead of tables, or documents.

Data is stored just like you might sketch ideas on a whiteboard. Your data is stored without restricting it to a pre-defined model, allowing a very flexible way of thinking about and using it.

Used for:

"Relational" dbs handle relationships poorly because of the costs of JOINs or lookups.

Organized like *nodes*, *relationships*, and *properties*.

## Nodes
Entities in the graph
## Relationships

## Engines available
- Neo4j
- Dgraph
- ArangoDB
- Amazon Neptune
- Azure Cosmos DB
- Tigergraph

# DGraph
Fully ACID-complaint, which means that it offers the same guarantees you'd have if you were using a traditional relational database system.
### On docker
```bash
// Dgraph engine:
	docker run --name dgraph -d -p 8080:8080 -p 9080:9080 dgraph/standalone:latest
// Dgraph Ratel (UI web):
	docker run --name ratel -d -p 8000:8000 dgraph/ratel:latest

```

## DQL
Dgraph Query Language is Dgraph's propietary language to *add*, *modify*, *delete* and *fetch data*.
Is declarative, which means that queries return a response back in a similar shape to the query
## Queries
Fetching data is done through **DQL Queries**.
## Mutation
Adding, modifying or deleting data is done through DQL *Mutations*.