Containers are lightweight software packages that contain all resources necessary to run software applications inside them.

![[Pasted image 20240122072257.png|450]]

Containers and virtual machines are very similar resource virtualization technologies, Virtualization is the process in which a system singular resource like RAM, CPU, DISK, or Networking can be "Virtualized" and represented

## vs Virtual Machine
![[Pasted image 20240122074248.png|460]]

# Docker
*Running an image*:
- docker run image_name
*Download an image*:
- docker pull image_name
*Activate interactive option*:
- docker -it image_name
*Delete containers*:
- docker rm CONTAINER_ID
- Delete all the exited containers
	- docker rm $(docker ps -a -q -f status=exited)
		- -q flag returns only the ID
		- -f filters through conditions provided, like status=exited
	- docker container prune
*Delete images*:
- docker rmi IMAGE_NAME
- 
