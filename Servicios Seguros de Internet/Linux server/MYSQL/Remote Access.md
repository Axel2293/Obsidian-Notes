## First steps
Enable the ips that we want to connecto from the outside on */etc/mysql/mysql.conf.d/mysqld.conf*
```shell
sudo nano mysqld.conf

## Agregamos o modificamos
bind-address = 0.0.0.0
```
Podemos agregar las ips que queremos que se puedan conectar, por default viene la ip de localhost que es 127.0.0.1, esto solo permite a usuarios locales acceder a la base de datos.

### Creamos un usuario user@remote_ip
Para poder acceder a la bases de datos debemos de crear un usuario con la ip de la computadora que tendra acceso remoto.
```mysql
CREATE USER 'newusr'@'remote_ip' IDENTIFIED BY 'new_pass';
## Damos los permisos que querramos
GRANT ....
## Con esto damos todos los permisos
GRANT ALL PRIVILEGES ON *.* TO 'newusr'@'remote_ip';
## Reload permissions
FLUSH PRIVILEGES;
```

## Usuario para acceso desde cualquier IP
Este usuario puede acceder desde cualqueir ip y no tendemos que establecer la ip con la que se accedera. Con *%* podemos indicar que acepte cualquier ip, en este ejemplo creamos un suario root con permisos de acceso para cualquier IP.
```mysql
CREATE USER 'root'@'%' IDENTIFIED BY 'some_pass';
GRANT ALL PRIVILEGES ON *.* TO 'root'@'%';
```



https://stackoverflow.com/questions/19101243/error-1130-hy000-host-is-not-allowed-to-connect-to-this-mysql-server

https://www.digitalocean.com/community/tutorials/how-to-allow-remote-access-to-mysql



