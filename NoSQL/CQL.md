```DOCKER

```
## Describe
Provides info about the connected Cassandra cluster
```Apache Cassandra
DESCRIBE CLUSTER
DESCRIBE KEYSPACES
DESCRIBE TABLES
DESCRIBE TABLE system.built_views
```

#### CREATE
Create a new Keyspace
```Cassandra
CREATE KEYSPACE iteso_bdnr WITH replication = {'class':'SimpleStrategy', 'replication_factor' : 3};

```
#### MODIFY
```Cassandra
ALTER KEYSPACE iteso_bdnr WITH replication = {'class':'SimpleStrategy', 'replication_factor' : 1};
```
#### USE
```Cassandra
USE iteso_bdnr;
```

#### CREATE TABLE
```CASSANDRA
CREATE TABLE emp(emp_id int PRIMARY KEY, emp_name text, emp_city text, emp_sal varint, emp_phone varint);
```
#### CREATE COLUMN
```CASSANDRA
ALTER TABLE emp ADD emp_email TEXT;
```

### Insert data
```CASSANDRA
INSERT INTO emp (emp_id, emp_name, emp_city, emp_phone, emp_sal)  
VALUES(1,'leo', 'Guadalajara', 9848022338, 50000);  
  
INSERT INTO emp (emp_id, emp_name, emp_city, emp_phone, emp_sal)   
VALUES(2,'fulanita', 'Phoenix', 9848022339, 40000);  
  
INSERT INTO emp (emp_id, emp_name, emp_city, emp_phone, emp_sal) VALUES(3,'sutanito', 'Cancun', 9848022330, 45000);
```

