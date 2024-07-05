Ayuda con el problema de compatibilidad y ayuda a hacer el cambio de componentes sin afectar el código.

>[!Containers]
>Son entornos completamente aislados, pueden tener sus propios procesos, servicios, interfaz de red, sus propias monturas, casi como una maquina virtual, excepto que todos comparten el mismo **Sistema Operativo Kernel**.
>Hay distintos tipos, Docker utiliza **LXC**.

>[!LXC]
>Is a well-known Linux container runtime that consists of tools, templates, and library and language bindings. It's pretty low level

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