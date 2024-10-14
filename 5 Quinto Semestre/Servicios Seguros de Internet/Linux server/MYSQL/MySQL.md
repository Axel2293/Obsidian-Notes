**MySQL** es un sistema de **gestión de bases de datos relacional** desarrollado bajo licencia dual GPL/Licencia comercial por Oracle Corporation y está considerada como la **base datos open source más popular del mundo**​ y una de las más populares en general junto a Oracle y Microsoft SQL Server, sobre todo para entornos de desarrollo web.

## Comandos
- *ALL
	- Permite el acceso completo a una base de datos especifica
- *CREATE
	- Permite crear bases de datos y tablas
- *DROP
	- Elimina los datos y la estructura de la tabla
- *EXECUTE
	- Permite ejecutar las rutinas almacenadas
- *GRANT OPTION
	- Permite a un usuario conceder o retirar los privilegios de usuario
- *INSERT
	- Permite insertar
- *SELECT
	- Permite seleccionar los datos de una base de datos
- *SHOW DATABASES
	- Permite ver la lista completa de todas las bases de datos
- *UPDATE
	- Permite actualizar filas de una tabla
- *REVOKE
	- Permite revocar permisos
	- Ejemplo:
		- REVOKE **permission** ON *basededatos* FROM *usuario@nombreservidor*;
- *FROM*
- *WHERE*

## Iniciar - Reiniciar
```shell
sudo /etc/init.d/mysql  restart
sudo /etc/init.d/mysql  stop
```

## Instalación
```shell
sudo apt  install  mysql-server  mysql-client  mysql-common
```

## Guia-basica
```shell
#Entrar con el usuario root (default sin contraseña)
sudo mysql -u root
```
```mysql
#Creamos una bases de datos
CREATE DATABASE basededatosnueva
#Verificamos con
SHOW DATABASES;
#Nos movemos a la base de datos nueva
USE basededatosnueva;
#Creamos una tabla
CREATE TABLE personas(nombre VARCHAR(50), edad INT);
#Comprobamos que se creo la tabla
SHOW FULL TABLES FROM basededatosnueva;
#Creamos un usuario para mysql
CREATE USER 'usuario'@'localhost' IDENTIFIED BY '1234567';
#Otorgamos permisos al nuevo ususario
GRANT CREATE,INSERT,DELETE,UPDATE,SELECT ON basesdedatosnueva.* TO usaurio@localhost;
#Comprobamos que el usuario tenga los permisos dados
SHOW GRANTS FOR 'usuario'@'localhost';
# Podemos ver los usuarios dedaos de alta de todo nuestro mysql con 
select user, host from mysql.user;
#Salimos
quit
```

#### Evitar inicio con procesos de verificacion
```shell
sudo  systemctl  set-environment  MYSQLD_OPTS="--skip-networking  --skip-grant-tables"

#Reiniciamos
sudo systemctl restart mysql.service

```

#### Cambiar contraseña de root
```mysql
#Entramos
sudo mysql -u root

#Quitamos privilegios
flush privileges;

#Cambiamos a la base de datos mysql
USE mysql

#Cambiamos la contraseña
ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY 'passwordnuevo';

#Salimos
quit
```
```shell
#Matamos todos los procesos de mysql para que el cambio de contraseña se aplique
sudo killall -u mysql

#Reiniciamos mysql
sudo systemctl restart mysql.service
```

#### Iniciar sesion con nueva contraseña
Para iniciar como root con la nueva contraseña debeos de indicar que ya tiene contraseña
```shell
sudo mysql -u root -p
```

