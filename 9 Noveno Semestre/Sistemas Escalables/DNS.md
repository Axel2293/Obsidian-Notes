# Recursive DNS Service
A recursive DNS service doesn't own any DNS records but acts as an intermediary that can get the DNS information on your behalf. If a recursive DNS service has the DNS reference cached or stored for a period of time, then it answers the DNS query by providing the source or IP information. If not, it passes the query to one or more authoritative DNS servers to find the information.

# Route 53
- DNS web service, manages domain names registers and provides hosted zones
- Perform health checks to monitor resources, endpoints
- Route 53 offers various routing options, which can be combined with DNS failover to enable low latency, fault tolerant architectures.
	- Application Recovery Controller
		- Gives you insights into whether your applications and resources are ready for recovery and helps you manage and coordinate failover.
![[Pasted image 20250924080746.png]]
- Route 53 can be used for load balancing too:
	- To configure weighted routing, you create records that have the same name and type for each of your resources. You assign each record a relative weight that corresponds with how much traffic you want to send to each resource. Route 53 sends traffic to a resource based on the weight that you assign to the record as a proportion of the total weight for all records in the group.
- If your application is hosted in multiple AWS Regions, you can improve performance for your users by serving their requests from the AWS Region that provides the lowest latency.

![[Pasted image 20250924081551.png]]

![[Pasted image 20250924081928.png]]
![[Pasted image 20250924082142.png]]