Ayuda con el problema de compatibilidad y ayuda a hacer el cambio de componentes sin afectar el código.

>[!Containers]
>Son entornos completamente aislados, pueden tener sus propios procesos, servicios, interfaz de red, sus propias monturas, casi como una maquina virtual, excepto que todos comparten el mismo **Sistema Operativo Kernel**.
>Hay distintos tipos, Docker utiliza **Libcontainer**.

>[!LXC]
>Is a well-known Linux container runtime that consists of tools, templates, and library and language bindings. It's pretty low level.
>Docker used it, but they changed to libcontainer as their API for creating and managing containers running above a Linux kernel.

- Docker makes the development and deployment of LXC containers much easier.
- Docker is a *High-Level Tool*
### The matrix from hell
- Mantener actualizado las bases de datos
## The kernel
- Docker containers share the subjacent kernel on which Docker is running.
# Containers Vs Virtual Machines
- Containers are more lightweight than a VM
- Containers are not insulated as Vm's
![[Pasted image 20240704184332.png]]

# DockerHub o DockerStore
- This is where you can find containerized products
# Images
- Docker images are templates or packages to create one or more containers.
# Container
- Execute instances of an image insulated between each other.
- Each has its own environment and set of processes.
# Advantages of Docker
- With Docker, Devs and Operations teams work hand in hand to transform a guide into a Docker file with both requirements.
	- This file is used to create an image for their applications, which can now be executed in any docker-installed host.
	- Guarantees that the image will be executed in the same way everywhere.
## Installing Docker on Ubuntu Linux
- First install ssh server so we can have a remote connection to the Linux server
```shell
sudo apt install openssh-server
sudo apt install net-tools
```

# Commands
- run + image_name
	- Execute container from image
	- -d: execute container on the background
- ps -a
	- Show all the containers (on or off)
- stop + ID or name
	- stop an active container
- rm + ID or name
	- delete a container
- rmi + name
	- delete an image
- images
	- display all available images and sizes
- pull + name
	- download an image

## Advanced
- exec + nombre
	- Execute a command on the container
	- + cat /etc/host para imprimir el contenido
- attach + ID o nombre
	- Adjuntar de vuelta el contenedor en ejecución a la terminal donde se pone el comando.
- run ubuntu sleep 5
	- Al agregar acción, el contenedor no se cierra y se mantiene en funcionamiento
	- sleep 5 mantiene en suspensión por 5 segs y luego se cierra

# Docker and Kubernetes (K8s)
In summary, Docker is primarily used for building and packaging applications into containers, while Kubernetes provides the orchestration and management capabilities to deploy and manage those containers at scale across clusters of hosts.

**Docker**:
- Docker is a platform that enables developers to build, ship, and run applications inside containers. Containers package applications and their dependencies into a standardized unit for software development, ensuring consistency across different environments.
- Key features of Docker include its lightweight nature, efficient resource usage, and the ability to isolate applications from their underlying infrastructure.
- Docker provides tools and a runtime environment for creating and managing containers. Developers use Docker to package applications into images that can be easily distributed and deployed across various computing environments.

**Kubernetes**:
- Kubernetes (often abbreviated as K8s) is an open-source container orchestration platform originally developed by Google and now maintained by the Cloud Native Computing Foundation (CNCF).
- Kubernetes automates the deployment, scaling, and management of containerized applications. It provides a platform-agnostic framework for deploying, running, and managing applications across clusters of hosts.
- Key features of Kubernetes include automated container deployment, scaling based on resource usage, load balancing, and automated rollout and rollback of applications.
- Kubernetes abstracts the underlying infrastructure, allowing developers to deploy and manage applications without worrying about the specifics of the underlying hardware or cloud provider.

**Relation Between Docker and Kubernetes**:
- **Container Runtime**: Docker provides the container runtime that Kubernetes uses to run containers. Kubernetes can manage containers created with Docker as well as other container runtimes like containerd and CRI-O.
- **Container Images**: Kubernetes uses Docker images as the standard format for packaging and distributing applications. Docker images are stored in registries (like Docker Hub or private registries) and can be pulled by Kubernetes to create and run containers.
- **Orchestration**: While Docker allows you to create and manage individual containers on a single host, Kubernetes extends this functionality to manage multiple containers across a cluster of hosts, handling scaling, load balancing, service discovery, and more.
# Networking
## Bridge
