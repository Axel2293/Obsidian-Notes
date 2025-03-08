- El orquestrador de contenedor mas popular
- Orquestracion de contenedores: Hace que muchos servidores actuen como uno solo
- Lanzado por Google en 2015 y ahora soportado por la comunidad
- Corre encima de Docker (Usualmente) como un set de API para contenedores
- Provee de API / CLI para administrar los contenedores a través de servidores
- Muchas opciones en la nube que lo soportan, AWS, Azure, GCP, etc.
![[Pasted image 20250307204443.png]]
## Docker Swarm vs Kubernetes
- Los dos son orquestradores de contenedores
- Los dos son solidos y tienen respaldo por los "vendors" y cloud providers.
- *Swarm*: fácil de hacer deploy/administrar
- *Kubernetes*: más caracteristicas y robusto
### Ventajas de Swarm
- Viene junto con Docker
- Es muy sencillo de usar
- Sigue regla de *80/20 %*  de caracteristicas para el 80% de los casos de uso reales
- Corre en los mismos escenarios que lo hace Docker:
	- ARM, Windows, 32 bits, local, cloud datacenter
- Seguro
- Facil de encontrar soluciones a los problemas encontrado en la implementación de ??
- Swarm
### Ventajas Kubernetes
- Los proveedores en la nube te ayudan a deployar y administrar Kubernetes por ti.
- Vendors de infraestructura están heciendo sus propias distribuciones
- Mucha adopción por la comunidad
- Flexible, cubre muchos casos de uso
![[Pasted image 20250307204900.png]]

# Terminología
K8's or Kube (8 letras entre KS de Kubernetes)
- *Kubectl*: CLI para configurar Kubernetes y administrar las aplicaciones. -"Cube COntrol"
- *Node*: Un solo servidor en en un cluster de Kubernetes.
- *Kubelet*: Agente de Kubernetes que corre en los nodos.
- *Control Plane*: Similar al manager en Docker Swarm, grupo de contenedores que manejan el cluster
	- Incluye el API server, scheduler, controller manager, etcd (almacen de datos distribuido), entre otros
	- Algunas veces es llamado master
![[Pasted image 20250307205203.png]]
![[Pasted image 20250307205409.png]]
## Instalación local
