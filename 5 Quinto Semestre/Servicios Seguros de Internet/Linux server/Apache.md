*Apache es una popular y eficiente alternativa, que ofrece servicios web*,  
para entender lo que es Apache, primeramente definiremos lo que es un  
servidor web. La definición más sencilla de servidor web, que es un  
programa especialmente diseñado para transferir datos de hipertexto, es  
decir, páginas web con todos sus elementos (textos, widgets, baners, etc),  
estos servidores web utilizan el protocolo *http y https*

Apache es actualmente el servidor web mas popular

## Instalación
```shell
sudo apt install apache2
```

Editamos
```shell 
sudo nano /etc/apache2/apache2.conf
```

Agregamos y guardamos
```Conf
ServerName IPServidor
```

Abrimos los puertos HTTP y HTTPS
```shell
sudo ufw allow "Apache Full"
```

En este punto el servidor ya puede contestar peticiones HTTP y podemos acceder a la pagina default de apache desde cualquier computadora.

![[Pasted image 20230416213101.png]]

## SSL para HTTPS

SSL nos permite tener certificados de seguridad para la verificacion de identidades, generalmente estos certificados son firmados por empresas certificadas, pero tambien podemos auto-firmar nuestros propios certificados.

En linux podemos usar openssl
```shell
sudo apt install openssl
```

Habilitamos los certificados TLS para el cifrado SSL en apache
```shell
sudo a2enmod ssl
#Reiniciamos apache
sudo systemctl restart apache2
```

Creamos el certificado TLS
```shell
sudo openssl req -x509 -nodes -days 365 -newkey rsa:2048 -keyout  
/etc/ssl/private/apache-selfsigned.key -out /etc/ssl/certs/apache-selfsigned.crt
```

req -x509: Especifica que queremos utilizar la gestión de peticiones de firma de  
certificado (CSR) X.509  
-nodes: Esto le dice a OpenSSL que omita la opción de asegurar nuestro certificado  
con una contraseña, ya que necesitamos que Apache pueda leer el archivo, sin  
intervención del usuario cuando se inicie el servidor  
-days 365: Esta opción establece el tiempo que se considerará válido el certificado  
-newkey rsa:2048: Esto especifica que queremos generar un nuevo certificado y una  
nueva clave RSA de 2048 bits al mismo tiempo  
-keyout: Ruta del archivo de clave privada generado  
-out: Ruta del archivo de certificado generado

El comando nos pedira los siguientes datos:
- Country Name (2 letter code) [XX]:MX  
- State or Province Name (full name) []:Jalisco  
- Locality Name (eg, city) [Default City]:Guadalajara  
- Organization Name (eg, company) [Default Company Ltd]:SOTSAN Company  
- Organizational Unit Name (eg, section) []:Information Technology  
- Common Name (eg, your name or your server's hostname) []:nombrededominio  
- Email Address []:usuario@nombrededominio

Verificamos que la clave privada y el certificado esten creados correctamente:
```shell
sudo ls -l /etc/ssl/private/apache-selfsigned.key  
sudo ls -l /etc/ssl/certs/apache-selfsigned.crt
```

Creamos:
```shell
sudo nano /etc/apache2/sites-available/nombrededominio.conf
```
Agregamos:
```conf
<VirtualHost *:443>  
	ServerName nombrededominio  
	DocumentRoot /var/www/nombrededominio  
	SSLEngine on  
	SSLCertificateFile /etc/ssl/certs/apache-selfsigned.crt  
	SSLCertificateKeyFile /etc/ssl/private/apache-selfsigned.key  
</VirtualHost>  
<VirtualHost *:80>  
	ServerName nombrededominio  
	Redirect / https://nombrededominio/  
</VirtualHost>
```

Creamos la carpeta para la pagina HTTPS
```shell
sudo mkdir /var/www/nombrededominio
```

Copiamos el default html de apache a la carpeta
```shell
sudo cp /var/www/html/index.html /var/www/nombrededominio
```

Habilitamos la configuracion
```shell
sudo a2ensite nombrededominio.conf
```

Probamos la configuracion y reiniciamos
```shell
sudo apache2ctl configtest && systemctl reload apache2
```

Al entrar con la direccion https el navegaddor probablemente nos marque que el sitio es peligroso ya que el certificado es autofirmado y no puede verificar si es quien dice ser.