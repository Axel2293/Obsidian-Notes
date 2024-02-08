## Wide-Column use cases
Are ideal for use cases that require a large dataset that can be distributed across multiple database nodes, especially when the columns are not always the same for every row.
- Log data
- IoT
- Time-series data (temperature monitoring or financial trading data)
- Attribute-based data, such as user preferences or equipment features
- Real-time analytics.

#### Engines
Most popular of 2022
- Apache Cassandra
- Apache Hbase
- Google BigTable
- MicrosoftAzure Cosmos DB
- ScyllaDB

# Apache Cassandra
During this course, we will use Apache Cassandra as the database engine for learning and practicing the wide-columns database models.

This is a **distributed database** from Apache that is *highly scalable* and designed to *manage very large amounts of structured data*. It provides high availability with no point of failure.
- Scalable - Fault tolerant - Consistent
- Column-oriented
- Created at facebook

### Query Interfaces
Cassandra provides a promot query language shell (*cqlsh*) that allows users to cummunicate with it. Using this shell you can execute Cassandra Query Language (*CQL*).
Using *CQLSH* you can:
- Define a schema
- Insert data
- Execute query
### Design Model
The design goal of Cassandra is to *handle big data workloads* across multiple nodes without any single point of failure. Has *peer-to-peer* distributed system across its nodes, and *data is distributed* among all the nodes in a cluster.
### Data Model
##### Keyspace
Is the outmost container for data in Cassandra. the basic attributes of a Keyspace in Cassandra are:
- *Replication factor*: it is the number of machines in the cluster that will receive copies of the same data.
- *replica placement strategy*: it is nothing but the strategy to place replicas in the ring. We have
- *Column families*: Keyspace is a container for a list of one or more column families. A column family, in turn, is a container of a collection of rows. Each row contains ordered columns. Column families represent the structure of your data. Each keyspace has at least
##### Column Family
Is a container for an ordered collection of rows. Each row, in turn, is an ordered collection of columns.

| Ralational Table | Cassandra Column Family |
| ---- | ---- |
| A schema in a relational model is fixed |  |
|  |  |
|  |  |
Cassandra does not force individual rows to have all the columns.
![[Pasted image 20240129082154.png|450]]

#### Column
![[Pasted image 20240129082638.png|300]]
#### SuperColumns
Stores a map of sub-columns
![[Pasted image 20240129082651.png|300]]
