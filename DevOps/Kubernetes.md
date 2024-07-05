- It is an *orchestrator* for containers
- Manage many containers between many servers (clusters)
>[!tip] 
>K8s makes *zero downtime* a reality as it provides high availability by having copies of your applications ready to swap.
## Architecture
- Two big groups
	- *MASTER*
		- API SERVER
		- Controller Manager
		- Scheduler
			- Moves PODS from place to place.
		- All are stored in a database *etcd*
			- State of the cluster, etc..
	- *WORKER*
		- Every worker runs an agent called **kubelet**
![[Pasted image 20240704221025.png]]
>[!warning]
>Pods can interact with each other, but its not a good idea to point to static IP's as POD's are Volatile. Its better to use the Cluster IP service.
### POD's
- Has only one IP or share the network namespace
- Normally, only one container is running in every POD
- Volatile
- Run on the *WORKERS*
![[Pasted image 20240704220952.png]]
### Services
- Load balancer
- Ingress
- Cluster IP
- Node port
