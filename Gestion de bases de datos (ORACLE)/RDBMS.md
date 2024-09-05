### What is an RDBMS?

A **Relational Database Management System (RDBMS)** is a type of database management system (DBMS) that stores data in a structured format, using rows and columns. Data is organized into tables, and relationships between data are managed through the use of keys. RDBMSs use Structured Query Language (SQL) for accessing and managing the data.

### Main Features of an RDBMS

1. **Data Organization**: Data is organized into tables (relations), with rows representing records and columns representing attributes.
2. **Data Integrity**: Ensures accuracy and consistency of data through constraints like primary keys, foreign keys, and unique constraints.
3. **SQL Support**: Provides a standardized language (SQL) for querying and managing the data.
4. **ACID Transactions**: Supports Atomicity, Consistency, Isolation, and Durability (ACID) properties to ensure reliable transactions.
5. **Normalization**: Data is normalized to reduce redundancy and improve data integrity.
6. **Concurrency Control**: Manages simultaneous data access by multiple users, ensuring data consistency.
7. **Data Security**: Provides mechanisms for access control and data protection.
8. **Data Relationships**: Facilitates the creation of relationships between tables using foreign keys.
9. **Backup and Recovery**: Includes tools for data backup and recovery to prevent data loss.

### Codd's 12 Rules

Dr. Edgar F. Codd, the inventor of the relational model, proposed 12 rules that a database management system must follow to be considered truly relational:

1. **Information Rule**: All data should be represented as values in tables.
2. **Guaranteed Access Rule**: Every data item should be accessible by using a combination of table name, primary key, and column name.
3. **Systematic Treatment of Null Values**: Null values must be uniformly treated and should not be confused with an empty string or zero.
4. **Dynamic On-line Catalog Based on the Relational Model**: The database’s metadata should be stored in tables and accessible using the same query language as the data.
5. **Comprehensive Data Sublanguage Rule**: The system must support a comprehensive language that includes data definition, manipulation, and transaction management.
6. **View Updating Rule**: All views that are theoretically updatable must be updatable by the system.
7. **High-level Insert, Update, and Delete**: The system must support high-level operations for modifying data in sets, rather than individual records.
8. **Physical Data Independence**: Changes to the physical storage of data should not require changes to applications or queries.
9. **Logical Data Independence**: Changes to the logical schema (table structure) should not require changes to applications or queries.
10. **Integrity Independence**: Integrity constraints should be stored in the catalog and not in application programs.
11. **Distribution Independence**: The system should manage data distribution across a network without affecting the user’s access to data.
12. **Non-subversion Rule**: If the system provides a low-level access interface, it must not bypass the system’s integrity constraints.

### History of RDBMS

1. **1970s**: Dr. Edgar F. Codd introduced the relational model in 1970.
2. **1980s**: The first commercially available RDBMSs emerged, including IBM’s DB2 (1983) and Oracle Database (1980).
3. **1990s**: RDBMS technology matured with the rise of SQL as a standard query language. Microsoft SQL Server and MySQL also emerged during this period.
4. **2000s**: The development of open-source RDBMSs like PostgreSQL and MySQL gained traction. Integration with web technologies became significant.
5. **2010s-Present**: The rise of big data and NoSQL databases introduced new paradigms, but RDBMSs remain crucial for structured data and transactional systems.

### Main RDBMSs Currently

1. **Oracle Database**
   - **Market Share**: Leading position in enterprise environments.
   - **Features**: Advanced features for high availability, security, and scalability.
   - **Comparison**: Strong in large enterprise applications and complex transaction processing.

2. **Microsoft SQL Server**
   - **Market Share**: Widely used in enterprise environments, particularly in organizations using Microsoft technologies.
   - **Features**: Integration with Microsoft products, extensive BI tools.
   - **Comparison**: Good integration with Windows and Microsoft ecosystems, robust reporting tools.

3. **MySQL**
   - **Market Share**: Popular in web applications and small to medium-sized businesses.
   - **Features**: Open-source, high performance, and widely supported.
   - **Comparison**: More suitable for web applications, less feature-rich than Oracle or SQL Server.

4. **PostgreSQL**
   - **Market Share**: Increasingly popular in various applications due to its advanced features and open-source nature.
   - **Features**: Advanced support for complex queries, extensibility, and standards compliance.
   - **Comparison**: Known for its robustness and compliance with SQL standards.

5. **IBM Db2**
   - **Market Share**: Known for its use in large enterprise environments.
   - **Features**: High performance, advanced analytics, and support for both relational and non-relational data.
   - **Comparison**: Strong in enterprise settings with a focus on analytics and large-scale data management.

### Comparison and Market Share

- **Oracle Database** is known for its robustness and feature set in enterprise environments but comes with a higher cost.
- **Microsoft SQL Server** offers excellent integration with Microsoft products and is favored in Microsoft-centric environments.
- **MySQL** is popular for web applications and is widely used due to its open-source nature and cost-effectiveness.
- **PostgreSQL** is appreciated for its advanced features and open-source flexibility, increasingly adopted for complex applications.
- **IBM Db2** is a strong player in large enterprises with its focus on data analytics and hybrid data management.

Market share varies based on the region and specific industry needs, but Oracle and Microsoft SQL Server are generally leading in large enterprises, while MySQL and PostgreSQL are prominent in web and open-source applications.