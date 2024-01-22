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

Document databases use key-value pairs tied to documents with formats including XML
(eXtensible Markup Language), JSON (JavaScript Object Notation) and BSON (Binary JSON)
(Moniruzzaman & Hossain, 2013). Values are stored in these semi-structured data formats and
NoSQL Database Technology M. Madison, M. Barnhill, Cassie Napier, & J. Godin
© International Information Management Association, Inc. 2015 3 ISSN: 1543-5962-Printed Copy ISSN: 1941-6679-On-line Copy
each document may contain hundreds of attributes with varying data types. Examples of document
databases include CouchDB and MongoDB (Stonebraker, 2010).
Key-value stores pair alphanumeric keys with associated values in standalone hash tables. These
are useful for high-speed, scalable value retrievals. Examples of key-value stores include
MemcacheDB and DynamoDB (Stonebraker, 2010).
Wide-column stores are useful for distributed storage of very large quantities of data
(Moniruzzaman & Hossain, 2013). These systems provide time-stamping functions that make
them especially useful for managing versioned data. These systems also have applications for
predictive analytics.