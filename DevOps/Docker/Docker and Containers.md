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
#### Basic Commands
- *docker run*
	- Downloads the given image name from the Docker hub
- *docker ps*
	- Shows the list of the containers that are running
- *docker ps -a *
	- Shows the list of the containers that are running/stoped
- *docker start*
	- Start a given container
- *docker stop*
	- Stop a given container
- *docker rm*
	- Delete a given container
- *docker images*
	- Shows a list of the downloaded images
- *docker rmi*
	- Delete a given image 
- *docker logs*
	- Shows the logs of a container
>[!important]
>we can use docker run -d --name <name> <image>, this will assign a name to the container and run in the background because of -d.

