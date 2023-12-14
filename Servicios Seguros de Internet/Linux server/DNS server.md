
El proceso de traducción de los nombres de dominio en direcciones numéricas que las máquinas puedan entender es lo que se conoce como resolución de nombres, una labor que realiza el *Domain Name System*, en español Sistema de Nombres de Dominio, mas conocido por sus siglas DNS, su labor primordial consiste en *resolver las peticiones de asignación de nombres*.

## Resolucion recursiva
Es cuando el servidor no puede responder a una peticion y toma informacioan de otro servidor para responder a la peticion.

## Resolucion iterativa
Cuando el servidor no puede responder una peticion manda como respuesta la direccion del siguiente servidor DNS de la jerarquia.

![[Pasted image 20230416160912.png]]

*Relacionar direcciones IP con nombres de dominio*, ya que resulta mucho mas fácil relacionar para cualquiera el nombre del domino en lugar de su dirección IP. *Su funcionamiento se basa en el uso de una base de datos distribuida y jerárquica*, en la que se almacenan nombres de dominio y direcciones IP, así como el de prestar servicios de localización de servidores de correo. *Permite la consulta de diferentes tipos de registros* en los que se incluyen servidores de correo, direcciones IP, nombres de dominio, información textual, servicios, etc.

>[!info]
>DNS se encuentra en la capa 7 de aplicacion del modelo OSI y suel utilizar el puerto 53 (TCP y UDP)

## Instalacion 
El software de DNS que usaremos es BIND 9.
```shell
sudo apt install bind9 dnsutils
```

Cambiamos a la ruta y editamos con nano:  
*/etc/bind/named.conf.local*

```shell
sudo nano named.conf.local
```

Agregamos:
```conf
//Zona Directa  
Zone “nombrededominio”{  
	type master;  
	file “/etc/bind/db.nombrededominio”;  
};  
//Zona Inversa  
Zone “2.0.10.in-addr.arpa”{  
	type master;  
	file “/etc/bind/db.2.0.10”;  
};  
```
Guardamos, salimos y comprobamos que la configuración sea correcta  con:
```shell
named-checkconf
```

#### Zona directa
Copy a el siguente archivo
```shell
cp /etc/bind/db.local /etc/bind/db.nombrededominio
```

editamos con nano y agragamos
```yaml
#EDITAMOS
nano /etc/bind/db.nombrededominio

# AGREGAMOS LO SIGUIENTE CON LOS DATOS DEL DOMINIO
;  
; BIND data file for local loopback interface  
;  
$TTL 604800  
@ IN SOA nombrededominio. root.nombrededominio. (  
2 ; Serial  
604800 ; Refresh  
86400 ; Retry  
2419200 ; Expire  
604800 ) ; Negative Cache TTL  
;  
@ IN NS localhost.  
@ IN NS nombreservidor.  
@ IN A 127.0.0.1  
@ IN AAAA ::1  
nombreservidor IN A 10.0.2.12  
nombrededominio IN A 10.0.2.12  
nombrewindows IN A 10.0.2.11  
router IN A 10.0.2.2  
www CNAME nombreservidor  
gateway CNAME router  
gw CNAME router


# COMPROBAMOS CON
sudo named-checkzone nombrededominio /etc/bind/db.nombrededominio
```

#### Zona inversa
Creamos el siguiente archivo con los datos de zona inversa
```shell
cp /etc/bind/db.127 /etc/bind/db.2.0.10

#EDITAMOS
nano /etc/bind/db.2.0.10

#AGREGAMOS
;  
; BIND reverse data file for local loopback interface  
;  
$TTL 604800  
@ IN SOA localhost. root.localhost. (  
1 ; Serial  
604800 ; Refresh  
86400 ; Retry  
2419200 ; Expire  
604800 ) ; Negative Cache TTL  
;  
@ IN NS localhost.  
@ IN NS nombreservidor.  
1.0.0 IN PTR localhost.  
12 IN PTR nombreservidor.nombrededominio.  
11 IN PTR nombrewindows.nombrededominio.  
1 IN PTR router.nombrededominio.

#COMPROBAMOS
sudo named-checkzone 2.0.10.in-addr.arpa /etc/bind/db.2.0.10
```

#### Agregamos los forwarders
Aqui hara la consulta cuando nuestro servidor DNS no pueda resolver alguna peticion.

```shell
sudo nano /etc/bind/named.conf.options
```

Podemos agregar los siguientes:
- 8.8.8.8: Servidor DNS de google

#### Habilitar inicio automatico
```shell
systemctl enable named

#Inicial el servicio
systemctl start named

#Reiniciar el servicio
service bind9 restart
```

## Configuracion de la interfaz de red
```shell
sudo nano -c /etc/netplan/00-installer-config.yaml  
```
```yaml
network:  
	version: 2  
	ethernets:  
		enp0s3:  
			dhcp4: false  
			addresses:  
				- 10.0.2.12/24  
			routes:  
				- to: default  
				via: 10.0.2.1  
			nameservers:  
				addresses: [10.0.2.12]
```

Es muy importante que la identacion este correcta, de lo contrario nuestra configuracion de red no sera valida y nuestra interfaz de red nisiquiera aparecera en la lista, dejando en desconeccion al servidor en su totalidad.