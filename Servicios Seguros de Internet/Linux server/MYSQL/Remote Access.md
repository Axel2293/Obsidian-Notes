## First steps
Enable the ips that we want to connecto from the outside on */etc/mysql/mysql.conf.d/mysqld.conf*
```shell
sudo nano mysqld.conf

## Agregamos o modificamos
bind-address = 0.0.0.0
```
Podemos agregar las ips que queremos que se puedan conectar, por default viene la ip de localhost que es 127.0.0.1, esto solo permite a usuarios locales acceder a la base de datos.

### Creamos un usuario user@remote_ip
```xml

