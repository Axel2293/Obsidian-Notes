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
- *Node*: Un solo servidor en en un cluster de Kubernetes.
	- Dos tipos **Master Node** (Gestión del Cluster) Y **Worker Node** (Ejecución de carga de trabajo)
- *Pod*: Uno o más contenedores, corriendo juntos en un nodo.
	- Unidad básica para el deployment
	- Los contenedores siempre estan en pods.
- *Service*: Endpoint de red para conectar un pod. (Especificar DNS y puerto)
	- Permite exponer tu aplicación para que sea accesible desde fuera del clúster o desde otros Pods.
- *Namespace*: agrupar grupo de objetos en un cluster, util para filtrar objetos.
	- Son como "carpetas virtuales" que te permiten organizar y aislar recursos dentro de un clúster.
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
### Crear y ejecutar un POD con un contenedor de NGINX
```bash
kubectl run my-nginx --image nginx
# Lista pods
kubectl get pods
# Lista todos los objetos
kubectl get all
```
### Definir applicación mediante YAML
```yaml nginx_deployment.yaml
apiVersion: apps/v1
kind: Deployment
metadata:
  name: mi-app
spec:
  replicas: 2
  selector:
    matchLabels:
      app: mi-app
  template:
    metadata:
      labels:
        app: mi-app
    spec:
      containers:
      - name: mi-contenedor
        image: nginx
```

Aplicamos el YAML
`kubectl apply -f <ruta-del-archivo>.yaml`
Esto va a crear la aplicación
![[Pasted image 20250309195511.png]]
Ahora tenemos los dos pods
![[Pasted image 20250309195640.png]]
#### Exponer la aplicación
```bash
kubectl expose deployment mi-app --type=NodePort --port=80
# Obtener URL
minikube service mi-app --url
```

#### Escalar la aplicación
```bash
kubectl scale deployment mi-app --replicas=3
```
Ahora tenemos 3 pods con un contenedor nginx cada uno.
![[Pasted image 20250309200538.png]]
#### Eliminar recursos
```bash
kubectl delete deployment mi-app
kubectl delete service mi-app
```
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
# Exponiendo contenedores
- `kubectl expose` crea un *service* para los pods existentes.
- Un service es una direccion estable para los pods.
- Si queremos conectar los pods, necesitamos un service.
- Hay diferentes tipos de services:
	- *ClusterIP* (Default)
## ClusterIP (default)
- Se asigna una IP virtual
- Solo es accessible por el cluster (nodos y pods)
- Pods pueden acceder al sercicio por medio de los puertos
- Solo es bueno en el cluster
## NodePort
- Un puerto por cada puerto (high port ) entre 30000 y 32767
- El puerto esta abierto en cada uno de los nodos
- Cualquiera se puede conectar (si pueden acceder al nodo)

## LoadBalancer
- Controla el loadbalancer externo para conectarse copn el cluster
- Solo disponible cuando la infraestructura ya proce de un LB (AWS, ELB, Azure App Gateway)
- Crea servicios de NodePort + ClusterIP, le dice al LB que envíe el tradico a NodePort
## ExternalName
- CNAME DNS
- No es usado para los pods, pero le da a los pods un nombre DNS para usarlo fuera de Kubernetes.
```
kubectl expose deployment/apache --port 8888 --name apache-loadbalancer --type LoadBalancer

```

# Configuration YAML
- Puede ser un archivo YAML o JSON
- Un manifiesto describe
- Cada manifiesto necesita:
	- apiVersion:
	- kind:
	- metadata:
	- spec:
# Building YAML files


# Volume
## PV
Persistent Volume
```yaml
apiVersion:
kind: PersistentVolume
metadata:
	name: pv-demo
spec:
	capacity:
		storage: 1Gi
	accessModes:
		- ReadWriteMany # Permite acceso desde multiples PODS
	persistentVolumeReclaimPolicy: retain
	
```
![[Pasted image 20250320202310.png]]
## PVC - Persistent Volume Claim
```yaml

```
![[Pasted image 20250320203405.png]]
## POD - PVC
```shell
kubectl apply -f volume.yaml
kubectl applu -f volume-claim.yaml
kubectl applu -f escritor.yaml
kubectl applu -f lector.yaml

kubectl get pv,pvc

kubectl get pods

kubectl logs pod-lector
```

## Sotorage Class
Usa *StorageClass* si quieres que Kubernetes *cree los volumenes dinamicamente* según la demanda (ideal en nubes como AWS EBS, Azure, SIdks, GCP Persistent Disks)

```yaml
apiVersion: storage.k8s.io/v1
kind: StorageClass
metadata:
	name: aws-ebs-
```

# HELM

| Concepto     | Descripción                                                                                  |
| ------------ | -------------------------------------------------------------------------------------------- |
| Chart        | Un paquete de Helm contiene los yamls necesarios para desplegar una aplicacion en Kubernetes |
| Release      | Una instancia de un Chart desplegada en un clúster de Kubernetes                             |
| Values.yaml  | Archivo donde puedes definir variables personalizadas para configurar un Chart.              |
| Repositories | ugares donde se almacenan Charts, como ArtifactHub, Bitnami, JFrog                           |

# Azure Kubernetes Service AKS
Implementación y administración de aplicaciones en contenedores a escala.


# Observability
t 
