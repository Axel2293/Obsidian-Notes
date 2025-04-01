- Everything in Linux are files!!
A file descriptor is simply an *integer associated with an open file*. But, that file can be a network connection, a FIFO, a pipe, a terminal, a real on-the-disk file, or just about anything else.

Therea are all kinds od dockers. Therea are DARPA internet addresses (Internet Sockers), path names on a local node (Unix Sockets)m CCITT X.25 addresses (X.25 Sockets that you can safely ignore), and probably manu others depending on which Unix flavor you run.

# Internet Sockets
## Types
### Stream Sockets
*SOCK_STREAM*
Reliable two-way connected communication streams. If you output two items into the socket in the order "1,2", they willl arrive int he order "1,2" at the opposite end. They will also be *error-free*

- What uses stream sockets?
	- `telnet`or `ssh` for example. All charactes you type need to arrive in the same order you type them, right? 
	- They use *TCP* Transmission Control Protocol. 
	- TCP makes sure your data arrives sequentially and error-free. You may have heard “TCP” before asthe better half of “TCP/IP” where “IP” stands for “Internet Protocol” (see RFC 7912).

### Datagram Sockets
*SOCK_DGRAM*
Sometimes calles "connectionless sockets". if you send a datagram, it may arrive. It may arrive out of order. If it arrives, the data within the packet will be error-free.
- What does it use?
	- They use *UDP* User Datagram Protocol.
# Data Encapsulation
When another computer receives the packet, the hardware strips the Ethernet header, the kernel strips the IP and UDP headers, the TFTP program strips the TFTP header, and it finally has the data.
![[Pasted image 20250328162602.png]]
## OSI model
- Application: where users interact with the network
- Presentation
- Session
- Transport
- Network
- Data Link
- Physical: hardware (serial, Ethernet, etc)
## Unix Model
- Aplication Layer (telnet, ftp, etc)
- Host-to-Host Transport Layer (TCP, UDP)
- Internet Layer (IP and routing)
- Network Access Layer (Ethernet, wi-fi or whatever)
# IPv4/6
Forget this dots-and-numbers look of IPv4, too; now we’ve got a hexadecimal representation, with each two-byte chunk separated by a colon, like this:
`2001:0db8:c9d2:aee5:73e3:934a:a5ae:9551`
That’s not all! Lots of times, you’ll have an IP address with lots of zeros in it, and you can compress them between two colons. And you can leave off leading zeros for each byte pair. For instance, each of these pairs of addresses are equivalent:
```
2001:0db8:c9d2:0012:0000:0000:0000:0051
2001:db8:c9d2:12::51
2001:0db8:ab00:0000:0000:0000:0000:0000
2001:db8:ab00::
0000:0000:0000:0000:0000:0000:0000:0001
::1
```
The address *::1* is the *loopback address*. It always means “this machine I’m running on now”. In *IPv4*, the loopback address is *127.0.0.1.*
Finally, there’s an IPv4-compatibility mode for IPv6 addresses that you might come across. If you want, for example, to represent the IPv4 address 192.0.2.33 as an IPv6 address, you use the following notation:
`::ffff:192.0.2.33`
We’re talking serious fun.
In fact, it’s such serious fun, that the Creators of IPv6 have quite cavalierly lopped off trillions and trillions of addresses for reserved use, but we have so many, frankly, who’s even counting anymore? There are plenty left over for every man, woman, child, puppy, and parking meter on every planet in the galaxy. And believe me, every planet in the galaxy has parking meters. You know it’s true.

# Subnets
For organizational reasons, it’s sometimes convenient to declare that “this first part of this IP address up through this bit is the network portion of the IP address, and the *remainder is the host portion*.

For instance, with IPv4, you might have 192.0.2.12, and we could say that the first three bytes are the net-work and the last byte was the host. Or, put another way, we’re talking about host 12 on network 192.0.2.0
# Port Numbers
16-bit number thats like the local address for the connection.
Think of the IP address as the street address of a hotel, and the port number as the room number.
POrts under 1024 are often consideres special, and usually require special OS privileges to use.
Fun Fact:
- DOOM used port 666

# Byte Order
## Big-Endian
Store bytes with the big end first.
Say b34f, you’ll store it in two sequential bytes b3 followed by 4f.
## Little-Endian
Store bytes reversed
so b34f would be stored in memory as the sequential bytes 4f followed by b3.

## Network Byte Order
The more-sane Big-Endian
All righty. There are two types of numbers that you can convert: *short* (two bytes) and *long* (four bytes).
These functions work for the *unsigned* variations as well. Say you want to convert a *short* from Host Byte Order to Network Byte Order. Start with “h” for “host”, follow it with “to”, then “n” for “network”, and “s” for “short”: h-to-n-s, or *htons()* (read: “Host to Network Short”).
![[Pasted image 20250328175416.png]]

# DeepSeek Guide
# Linux Socket Programming in C: From Zero to Expert

## Table of Contents
1. [Introduction to Sockets](#introduction-to-sockets)
2. [Basic Socket Concepts](#basic-socket-concepts)
3. [Socket System Calls](#socket-system-calls)
4. [TCP Client-Server Example](#tcp-client-server-example)
5. [UDP Client-Server Example](#udp-client-server-example)
6. [Advanced Topics](#advanced-topics)
7. [Error Handling and Debugging](#error-handling-and-debugging)
8. [Best Practices](#best-practices)
9. [Security Considerations](#security-considerations)
10. [Performance Optimization](#performance-optimization)
11. [Real-world Applications](#real-world-applications)

## Introduction to Sockets

Sockets are the fundamental technology for network communication between computers. They provide an interface between applications and the network protocol stack.

### What is a Socket?
- An endpoint for communication between two machines
- Combination of IP address and port number
- Similar to file descriptors in Unix/Linux

### Types of Sockets
12. **Stream Sockets (SOCK_STREAM)**: Connection-oriented, reliable, uses TCP
13. **Datagram Sockets (SOCK_DGRAM)**: Connectionless, unreliable, uses UDP
14. **Raw Sockets (SOCK_RAW)**: Access to lower-level protocols

## Basic Socket Concepts

### Network Byte Order
- Networks use big-endian byte order
- Important conversion functions:
  ```c
  htons() - Host to Network Short
  htonl() - Host to Network Long
  ntohs() - Network to Host Short
  ntohl() - Network to Host Long
  ```

### IP Addresses
- IPv4: 32-bit address (struct in_addr)
- IPv6: 128-bit address (struct in6_addr)
- Common representations:
  - Dotted-quad notation (e.g., 192.168.1.1)
  - DNS names (e.g., example.com)

### Port Numbers
- 16-bit unsigned integers (0-65535)
- Well-known ports: 0-1023 (require root privileges)
- Registered ports: 1024-49151
- Dynamic/private ports: 49152-65535

## Socket System Calls

### Core Functions
15. `socket()` - Create a socket
16. `bind()` - Bind a socket to an address
17. `listen()` - Listen for incoming connections (TCP)
18. `accept()` - Accept a connection (TCP)
19. `connect()` - Initiate a connection (TCP)
20. `send()`, `recv()` - Send/receive data (TCP)
21. `sendto()`, `recvfrom()` - Send/receive data (UDP)
22. `close()` - Close a socket
23. `shutdown()` - Shutdown part of a full-duplex connection
24. `getaddrinfo()` - Address-independent way to get address info

### Header Files
```c
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>
```

## TCP Client-Server Example

### TCP Server
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int server_fd, new_socket;
    struct sockaddr_in address;
    int opt = 1;
    int addrlen = sizeof(address);
    char buffer[BUFFER_SIZE] = {0};
    
    // Create socket file descriptor
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) {
        perror("socket failed");
        exit(EXIT_FAILURE);
    }
    
    // Set socket options
    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, &opt, sizeof(opt))) {
        perror("setsockopt");
        exit(EXIT_FAILURE);
    }
    
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = INADDR_ANY;
    address.sin_port = htons(PORT);
    
    // Bind socket to port
    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    
    // Listen for connections
    if (listen(server_fd, 3) < 0) {
        perror("listen");
        exit(EXIT_FAILURE);
    }
    
    printf("Server listening on port %d...\n", PORT);
    
    // Accept incoming connection
    if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t*)&addrlen)) < 0) {
        perror("accept");
        exit(EXIT_FAILURE);
    }
    
    // Read from client
    int valread = read(new_socket, buffer, BUFFER_SIZE);
    printf("Received: %s\n", buffer);
    
    // Send response
    char *hello = "Hello from server";
    send(new_socket, hello, strlen(hello), 0);
    printf("Hello message sent\n");
    
    // Close sockets
    close(new_socket);
    close(server_fd);
    
    return 0;
}
```

### TCP Client
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[BUFFER_SIZE] = {0};
    
    // Create socket
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
        perror("socket creation error");
        exit(EXIT_FAILURE);
    }
    
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);
    
    // Convert IPv4 address from text to binary form
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        perror("invalid address/address not supported");
        exit(EXIT_FAILURE);
    }
    
    // Connect to server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("connection failed");
        exit(EXIT_FAILURE);
    }
    
    // Send message to server
    char *hello = "Hello from client";
    send(sock, hello, strlen(hello), 0);
    printf("Hello message sent\n");
    
    // Read server response
    int valread = read(sock, buffer, BUFFER_SIZE);
    printf("Server response: %s\n", buffer);
    
    // Close socket
    close(sock);
    
    return 0;
}
```

## UDP Client-Server Example

### UDP Server
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    char buffer[BUFFER_SIZE];
    struct sockaddr_in servaddr, cliaddr;
    
    // Create socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }
    
    memset(&servaddr, 0, sizeof(servaddr));
    memset(&cliaddr, 0, sizeof(cliaddr));
    
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(PORT);
    
    // Bind socket
    if (bind(sockfd, (const struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
        perror("bind failed");
        exit(EXIT_FAILURE);
    }
    
    printf("UDP Server listening on port %d...\n", PORT);
    
    int len, n;
    len = sizeof(cliaddr);
    
    // Receive message from client
    n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, MSG_WAITALL, 
                 (struct sockaddr *)&cliaddr, &len);
    buffer[n] = '\0';
    printf("Client: %s\n", buffer);
    
    // Send response to client
    char *hello = "Hello from server";
    sendto(sockfd, (const char *)hello, strlen(hello), MSG_CONFIRM,
           (const struct sockaddr *)&cliaddr, len);
    printf("Response sent.\n");
    
    close(sockfd);
    return 0;
}
```

### UDP Client
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

#define PORT 8080
#define BUFFER_SIZE 1024

int main() {
    int sockfd;
    struct sockaddr_in servaddr;
    
    // Create socket
    if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) {
        perror("socket creation failed");
        exit(EXIT_FAILURE);
    }
    
    memset(&servaddr, 0, sizeof(servaddr));
    
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = INADDR_ANY;
    
    // Send message to server
    char *hello = "Hello from client";
    sendto(sockfd, (const char *)hello, strlen(hello), MSG_CONFIRM,
           (const struct sockaddr *)&servaddr, sizeof(servaddr));
    printf("Message sent.\n");
    
    // Receive server response
    char buffer[BUFFER_SIZE];
    int len, n;
    len = sizeof(servaddr);
    n = recvfrom(sockfd, (char *)buffer, BUFFER_SIZE, MSG_WAITALL,
                 (struct sockaddr *)&servaddr, &len);
    buffer[n] = '\0';
    printf("Server: %s\n", buffer);
    
    close(sockfd);
    return 0;
}
```

## Advanced Topics

### Non-blocking Sockets
```c
// Set socket to non-blocking mode
int flags = fcntl(sockfd, F_GETFL, 0);
fcntl(sockfd, F_SETFL, flags | O_NONBLOCK);
```

### Multiplexing with select()
```c
fd_set readfds;
FD_ZERO(&readfds);
FD_SET(sockfd, &readfds);

struct timeval tv;
tv.tv_sec = 5;  // 5 second timeout
tv.tv_usec = 0;

int retval = select(sockfd + 1, &readfds, NULL, NULL, &tv);
if (retval == -1) {
    perror("select");
} else if (retval) {
    if (FD_ISSET(sockfd, &readfds)) {
        // Socket has data to read
    }
}
```

### Polling with poll()
```c
struct pollfd fds[1];
fds[0].fd = sockfd;
fds[0].events = POLLIN;

int ret = poll(fds, 1, 5000); // 5 second timeout
if (ret > 0) {
    if (fds[0].revents & POLLIN) {
        // Data available to read
    }
}
```

### Socket Options
```c
// Set socket options example
int optval = 1;
setsockopt(sockfd, SOL_SOCKET, SO_KEEPALIVE, &optval, sizeof(optval));
```

### IPv6 Support
```c
struct sockaddr_in6 {
    sa_family_t     sin6_family;   // AF_INET6
    in_port_t       sin6_port;     // port number
    uint32_t        sin6_flowinfo; // IPv6 flow information
    struct in6_addr sin6_addr;     // IPv6 address
    uint32_t        sin6_scope_id; // Scope ID
};
```

## Error Handling and Debugging

### Common Errors
- `EACCES`: Permission denied (binding to privileged port)
- `EADDRINUSE`: Address already in use
- `ECONNREFUSED`: Connection refused
- `ETIMEDOUT`: Connection timed out
- `ENETUNREACH`: Network is unreachable

### Debugging Techniques
25. Use `perror()` or `strerror(errno)` to get error descriptions
26. Check return values of all socket functions
27. Use `netstat` or `ss` commands to inspect sockets
28. Use `tcpdump` or `wireshark` for packet inspection
29. Enable socket debugging with `setsockopt(fd, SOL_SOCKET, SO_DEBUG, &opt, sizeof(opt))`

## Best Practices

30. **Always check return values** of socket functions
31. **Use getaddrinfo()** for protocol-independent programming
32. **Handle partial sends/receives** - network operations may not transfer all data at once
33. **Implement timeouts** to avoid hanging indefinitely
34. **Close sockets properly** to avoid resource leaks
35. **Reuse addresses** with `SO_REUSEADDR` to avoid "Address already in use" errors
36. **Consider using higher-level libraries** like libevent or libuv for complex applications

## Security Considerations

37. **Validate all input** - never trust data from the network
38. **Use secure protocols** (TLS/SSL) for sensitive data
39. **Implement authentication** for critical services
40. **Drop privileges** after binding to privileged ports
41. **Use buffer bounds checking** to prevent overflow attacks
42. **Handle connection resets** gracefully
43. **Consider rate limiting** to prevent denial of service

## Performance Optimization

44. **Use non-blocking I/O** for high-performance servers
45. **Implement connection pooling** for clients
46. **Use sendfile()** for file transfers to avoid user-space copies
47. **Adjust buffer sizes** with `SO_RCVBUF` and `SO_SNDBUF`
48. **Enable TCP_NODELAY** for small, frequent messages
49. **Consider multicast** for one-to-many communication
50. **Use zero-copy techniques** where possible

## Real-world Applications

51. **Web servers** (HTTP/HTTPS)
52. **Database clients**
53. **Chat applications**
54. **File transfer tools**
55. **Distributed systems**
56. **IoT device communication**
57. **Game networking**

### Next Steps
58. Explore more advanced I/O models (epoll, kqueue)
59. Learn about protocol design (framing, serialization)
60. Study network security (TLS, encryption)
61. Experiment with multicast and broadcast
62. Build a real application (proxy server, chat system)

Remember that socket programming is a deep topic - this guide covers the fundamentals, but there's always more to learn through practice and real-world experience!