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

## Iniciar - Reiniciar
```shell
sudo /etc/init.d/mysql  restart
sudo /etc/init.d/mysql  stop
```

## Instalación
```shell
sudo apt  install  mysql-server  mysql-client  mysql-common
```
