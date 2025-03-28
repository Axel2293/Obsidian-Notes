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
