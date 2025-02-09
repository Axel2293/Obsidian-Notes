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
