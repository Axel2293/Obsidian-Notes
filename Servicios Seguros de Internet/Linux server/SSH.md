sSSH o Secure Shell, es un protocolo que facilita las comunicaciones  
seguras entre dos sistemas usando una arquitectura cliente/servidor y  
que permite a los usuarios conectarse a un host remotamente. A  
diferencia de otros protocolos de comunicación remota tales como  
FTP o Telnet, SSH encripta la sesión de conexión, haciendo imposible  
que alguien pueda obtener contraseñas no encriptadas.  

SSH está diseñado para reemplazar los métodos más viejos y menos  
seguros para registrarse remotamente en otro sistema a través de la  
shell de comando, tales como telnet o rsh

SSH es cifrado en cuanto a la transferencia de datos, asi que evit aque la informacion enviada pueda ser leida por tereceros.

>[!info]
>El cliente transmite su información de autenticación al servidor usando una encriptación robusta de 256 bits. Todos los datos enviados y recibidos durante la sesión se transfieren por medio de encriptación de 256 bits, lo cual los hacen extremamente difícil de descifrar y leer.

## Instalacion
Primero instalamos el cliente para podernos conectar a otros servidores y el servidor para que otros puedan conectarse al equipo.
```shell
sudo apt install openssh-server openssh-client
```

Cambiamos a la ruta donde esta el archivo de configuracion:
/etc/ssh/sshd_config

Editamos con nano
```shell
sudo nano sshd_config
```

Agregaremos los siguientes argumentos y guardamos
- Port 22
	- Este sera el puerto utilizado para las conexiones
- ListenAddress [ip-servidor]
	- Esta sera la ip con la que se escucharan las conexiones
- Protocol 2
- PermitEmptyPasswords no
- AllowUsers nombredeusuario
	- Este sera el usuario con el que vamos a poder ingresar por ssh
#### Verificar funcionalidad
Podemos verificar la configuracion con el modo de prueba
```shell
sshd -t
```
### Inicio automatico con el sistema
Para que el servicio se inicie automaticamente al inicia el sistema utilizamos systemctl:
```shell
sudo systemctl enable ssh  
sudo systemctl start ssh
```

reiniciamos el sistema y ssh deberia estar corriendo automaticamente. 

Podemos verifcar con service ssh status y tambien podremos ver los logs del servicio, si intentamos iniciar una conexion ahi se veran reflejados todos los movimientos.
```shell
service ssh status
```
