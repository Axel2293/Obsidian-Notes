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
	- Dos tipos **Master Node** (Gestión del Cluster) Y **Worker Node** (Ejecución de carga de trabajo)
- *Pod*: Uno o más contenedores, corriendo juntos en un nodo.
	- Unidad básica para el deployment
	- Los contenedores siempre estan en pods.
- *Kubelet*: Agente de Kubernetes que corre en los nodos.
	- Crea contenedores según las instrucciones del plano de control
	- Es la principal fuente de infraestructura métrica para la integración
	- Se encarga de la gestión de colúmenes dentro de los pods
	- Mantiene la continuidad de acceso durante los reinicios o reasignaciones de pods
	- Registra el nodo con el apiserver
	- Se asegura de que los contenedores descritos en los podSpecs estén funcionando y en buen estado
- *Control Plane*: Similar al manager en Docker Swarm, grupo de contenedores que manejan el cluster
	- Incluye el API server, scheduler, controller manager, etcd (almacen de datos distribuido), entre otros
	- Algunas veces es llamado master
- *Controller*: Es el encargado de crear, actualizar, eliminar pods y otros objetos.
	- Deployment
	- ReplicaSet
	- DeamonSet
	- Job
	- CronJob
- *Service*: Endpoint de red para conectar un pod. (Especificar DNS y puerto)
- *Namespace*: agrupar grupo de objetos en un cluster, util para filtrar objetos.
	- Son como "carpetas virtuales" que te permiten organizar y aislar recursos dentro de un clúster.
![[Pasted image 20250307205203.png]]
![[Pasted image 20250307205409.png]]
## Abstracciones de contenedores
![[Pasted image 20250307210606.png]]

![[Pasted image 20250307210700.png]]
![[Pasted image 20250309185833.png]]
## Minikube
Nos permite ejecutar un cluster de Kubernetes de un solo nodo en nuestra máquina local.

```zsh
brew install minikube
-------------------------------- MacOS Arm
curl -LO https://github.com/kubernetes/minikube/releases/latest/download/minikube-darwin-arm64
sudo install minikube-darwin-arm64 /usr/local/bin/minikube
-------------------------------- Linux x86
curl -LO https://github.com/kubernetes/minikube/releases/latest/download/minikube-linux-amd64
sudo install minikube-linux-amd64 /usr/local/bin/minikube && rm minikube-linux-amd64
```

## Usando Minikube
``` bash
# Iniciar/detener el cluster local
minikube start
minikube stop

# Verificar que aparezca el cluster local
kubectl get nodes

```

## Kubectl
Es la herramienta de linea de comandos para interactuar con Kubernetes K8's
Podemos crear **POD's** de dos formas:
- Mediante *comandos*
- Mediante un *YAML*
### Crear y ejecutar un pod de nginx
```bash
kubectl run my-nginx --image nginx
# Lista pods
kubectl get pods
# Lista todos los objetos
kubectl get all
```
### Definir applicación 
```yaml nginx-deployment.yaml
apiVersion: apps/v1
kind: Deployment
metadata:
	labels: 
		environment: test
	name: testdeploy
spec:
	replicas: 3
	selector:
		matchLabels:
			environment: test
	minReadySeconds: 10
	strategy:
		rollingUpdate:
			maxSurge: 1
			maxUnavailable: 0
		type: RollingUpdate
	template:
		metadata:
			labels:
				environment: test
		spec:
			containers:
			- image: nginx:1.16
			  name: nginx
```

Aplicamos el YAML
`kubectl apply -f <ruta-del-archivo>.yaml`
### Crear Deployment
```bash
kubectl create deployment my-nginx --image nginx

# Lista los pods
kubectl get pods

# Lista todos los objetos
kubectl get all
```
![[Pasted image 20250309192647.png]]
![[Pasted image 20250309192655.png]]