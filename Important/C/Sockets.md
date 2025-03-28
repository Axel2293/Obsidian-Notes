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