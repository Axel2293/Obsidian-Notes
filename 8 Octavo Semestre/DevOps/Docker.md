# S5 - Networks
El sistema de red en Docker permite que los contenedores se comuniquen entre sí y con el mundo exterior. Docker utiliza un modelo de red basado en plugins que permite a los usuarios elegir diferentes enfoques para la conectividad de red según sus necesidades.
![[Pasted image 20250209000147.png|300]]
```bash
docker network create practica
docker container run -d --net practica --net-alias search elasticsearch:2
docker container run -d --net practica --net-alias search elasticsearch:2
docker container ls
docker container run --rm --net practica alpine nslookup search
docker run --rm centos curl -s search:9200
```
# S6 - Volumenes

## Volumes
Pone en ubicación especial la data fuera del contenedor.
## Bind Mounts
Compartir una ubicación del host para que los contenedores lo puedan acceder.
- Mapea un archivo o Directorio del host a un archico o Directorio del container.
- Básicamente son dos ubicaciones apuntando al mismo archivo.
- No se puede 

```bash
docker pull mysql
docker image inspect mysql
```

# S7 - Docker Compose
Para configurar relaciones entre varios contenedores
- Guardar la configuración de nuestros contenedores en eun archivo fácil de leer
- Facilita el hecho de desplegar ambientes complejos sin necesidad de usar tantos docker run.
## Estructura de docker-compose yaml
- *Version* and name top level element
- *Services* top-level element
- *Networks* top-level element
- *Volumes* top-level element
- *Configs* top-level element
- *Secrets* top-level element
```yaml
version: '2'

services:
	wordpress:
		image: wordpress
		ports:
			- 8080:80
			- 91:91
		environment:
			WORDPRESS_DB_PASSWORD: example
		volumes:
			- ./wordpress-data:/var/www/html
	mysql:
		image: mariadb
```

## Comandos
- `docker compose up`
	- Configura y corre los contenedores, redes o volúmenes
	- `-d`
		- para que se ejecute en background
- `docker compose down`
	- Detiene y elimina los contenedores y redes
- `docker compose start`
	- Inicia todos los contenedores del compose
- `docker compose stop`
	- Detener todos los contenedores del compose
- `docker compose logs`
	- 