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

### Query 
### Design Model
The design goal of Cassandra is to *handle big data workloads* across multiple nodes without any single point of failure. Has *peer-to-peer* distributed system across its nodes, and *data is distributed* among all the nodes in a cluster.
### Data Model
##### Keyspace
Is the outmost container for data in Cassandra. the basic attributes of a Keyspace in Cassandra are:
- *Replication errors*