# Middleware
Its the intermediaries that go through the requests and, if necessary, they send a response and cancel the flow.
We can use middleware for:
- Authentication
- Validation of data
- Parsing data
- etc

```node
app.use(express.json());
```
