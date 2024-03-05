HTTP isa protocol that allows the fetching of the resources, such as HTML documents, images, etc.
- The protocol is based on a request-response model
- The client sends a request to the server, and the server sends a response back to the client.
- Its a stateless protocol, meaning that the server does not keep any data between two requests

# Request
A message sent from the client to the server.
It contains:
- *Request line*: Contains the method, the url, and the HTTP version.
	- Methods: GET, POST, PUT, DELETE
		- GET: request data from a specified resource
		- POST: submits data to be processed to a specified resource
		- 