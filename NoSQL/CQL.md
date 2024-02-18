>[!warning]
>The use of *ALLOW FILTERING* means that we didn't design our db correcting. As filtering could cause performance issues as it will search through all clusters.


```DOCKER

```
## Describe
Provides info about the connected Cassandra cluster
```cql
DESCRIBE CLUSTER
DESCRIBE KEYSPACES
DESCRIBE TABLES
DESCRIBE TABLE system.built_views
```

#### CREATE
Create a new Keyspace
```cql
CREATE KEYSPACE iteso_bdnr WITH replication = {'class':'SimpleStrategy', 'replication_factor' : 3};

```
#### MODIFY
```cql
ALTER KEYSPACE iteso_bdnr WITH replication = {'class':'SimpleStrategy', 'replication_factor' : 1};
```
#### USE
```cql
USE iteso_bdnr;
```

#### CREATE TABLE
```cql
CREATE TABLE emp(emp_id int PRIMARY KEY, emp_name text, emp_city text, emp_sal varint, emp_phone varint);
```
#### CREATE COLUMN
```cql
ALTER TABLE emp ADD emp_email TEXT;
```

### Insert data
```cql
INSERT INTO emp (emp_id, emp_name, emp_city, emp_phone, emp_sal)  
VALUES(1,'leo', 'Guadalajara', 9848022338, 50000);  
  
INSERT INTO emp (emp_id, emp_name, emp_city, emp_phone, emp_sal)   
VALUES(2,'fulanita', 'Phoenix', 9848022339, 40000);  
  
INSERT INTO emp (emp_id, emp_name, emp_city, emp_phone, emp_sal) VALUES(3,'sutanito', 'Cancun', 9848022330, 45000);
```

## SELECT
The **SELECT** keyword allows us to retrieve data from a table, conditions can be provided to narrow search.
```cql
// Visualize everything(*) from emp table
SELECT * FROM emp;

//Visualize colum emp_name from emp table
SELECT emp_name FROM emp;

//Visualize colums emp_name and emp_city from emp table where emp_id equal “1234”
SELECT emp_name, emp_city FROM emp WHERE emp_city = ‘Guadalajara’;
```
## DELETE
```cql
//Delete an index
DROP INDEX name;

//Delete a table
DROP TABLE emp;
```
# BATCH OPERATIONS
The BATCH statement combines multiple data modification language statements (such as INSERT, UPDATE, and DELETE) to achieve atomicity and isolation when targeting a single partition or only atomicity when targeting multiple partitions

*Reverts made operations if following ones fail*

```cql
BEGIN BATCH;  
INSERT INTO emp (emp_id, emp_name,emp_city,emp_phone,
emp_sal) VALUES(4,'perengano','La Paz',9848022331, 30000);  
UPDATE emp SET emp_sal = 50000 WHERE emp_id =3;  
DELETE emp_city FROM emp WHERE emp_id = 2;APPLY BATCH;
```

# PRIMARY KEY
A primary key in Cassandra can be composed of *2 parts.*

The *partition key* is the minimum specifier needed to perform a query using a where clause.

If you declare a composite clustering key, the order matters.

The partition keys is responsible for data distribution across nodes.

The clustering key is responsible for data sorting within a partition

¡The way primary keys work in Cassandra is an important concept to grasp.

¡A primary key in Cassandra consists of one or more partition keys and zero or more clustering key components. The order of these components always puts the partition key first and then the clustering key.
```
```