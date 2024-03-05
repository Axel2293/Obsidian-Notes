Is an *application programming interface (API)* that conforms to the design principles of the  _representational state transfer_ (REST) architectural style. **Provide a flexible, lightweight** way to integrate applications and to connect components in *microservices* architectures.
Provides high level of:
- Flexibility
- Scalability
- Efficiency
REST APIS come handy when, for example, we need to communicate a web app or web page with a cloud.based server.
>[!Resume]
>Its an *intermediary* between the web app and the could base server, which handles communication between the two. 
>Simple/Stand
>Scalable/stateless
>Perf/cache

### Requests
A request can be traduced form the CRUD operations with the HTTP methods.
- *Post*
- *Get*
- *Put*
- *Delete*
![[Pasted image 20240304192902.png|300]]
### Response

# Design principles
The only requirement as that they align with these *six* REST design principles, also known as architectural constraints:
- **Uniform interface**: All requests for the same resource should look the same, no matter where the request comes from. The REST API should ensure that the same piece of data, such as the name or email address of a user, belongs to only one uniform resource identifier (*URI*).
- **Client-server decoupling**:
- **Statelessness**
- **Cacheability**
- **Layered system architecture**
- **Code on demand** (optional)