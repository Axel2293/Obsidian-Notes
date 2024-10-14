### Comandos básicos
##### Sudo
Ejecuta la instruccion como root
##### Su
inicia sesión como root
##### Ls
Listado de todos los archivos y directorios
- *-d* : Lista el nombre del directorio en vez de los archivoscontenidos en el.
- *-t* :Lista los archivos ordenados por el tiempo de modificación en vez de ordenarlos alfabéticamente.
- *-h* : Muestra los atamaños de archivo en términos de kilobytes, megabytes, etc.
- *-A* : Lista todos los archivos excepto el "." y el "..."
- *-R* : Lista los contenidos de todos los directorios recursivamente.
- *-S* : Ordena el listado por el tamaño de los archivos.
- *ls* : Listado de todos los archivos y directorios
- *-l* : Lista los archivos con mucho más detalle, especificandopara cada archivo sus permisos, el número de enlaces rígidos, el nombre del propietario, el grupo al que pertenece, el tamaño de bytes y la fecha de la última modificación.
- *-a* : Lista todos los archivos incluyendo el "." y el ".."
- *-r* : Invierte el orden de listado de los archivos

##### Clear
Limpia la pantalla de terminal

##### Pwd
*Print working directory* despliega en pantalla el directorio donde el usuario está posicionado.

##### Mkdir
Crea un directorio en el directorio actual
- *-m* : Establece los permisos, en lugar de a=rwx
- *-p* : No hay eroores si existen, crear los directorios padres en caso necesario.
- *-v* : Muestra un mensaje por cada directorio creado.

##### Cd
Se usa para cmabiar de directorio en el que te encuentras.
- *-L* : Usar la estructura fisica del directorio.
- *P* :  Fuerza enlaces simbólicos.

##### Touch
Sirve para crear un nuevo archivo vacio si este no existe en la ruta actual o dada.

##### Nano
Editor y creador de archivos.

##### Cat
Permite la visualización de archivos sin necesidad de un editor de textos.
- *-n* : Numera las lineas mostradas
- *-b* : Numera las lineas mostradas, exceptuando las lineas vacias
- *-e* : Marca con el símbolo $ al final de cada linea.
- *-s* : Suprime las lineas continuas que estén vacías a solo 1
- *-v* : Muestra los caracteres especiales en el texto (\\,.ñ,etc.).

##### Rm
Borra archivos y directorios vacios
- *-f --force*  : Descarta los archivos y argumentos que no existian sin preguntar anted de cada borrado.
- *-i* : Pregunta un avez antes de borrar más de tres archivos.
- *-l* : Pregunta una vez antes de borrar más de tres archivos, o cuando se borra recursivamente.
- *-r, -R* : Borra los contenidos de los directorios recursivamente
- *-d, --dir* : Borra los directorios vacíos.

##### Cp
Se utiliza para copiar archivos
- *-b* : Crea un backup en el destino en el caso en el que exista un archivo llamado igual que el que queremos generar.
- *-f* : Fuerza el borrado de los archivos destino sin consultar o avisar al usuario.
- *-i* : Informa antes de sobrescribir un archivo en el destino indicado.
- *-p* : Realiza una copia de los archivos y directorios conservando la fecha de modificación de los archivos y carpetas originales.
- *-r* : Copia de formato recursiva.
- *-R* : Copia de directorio /origen /destino/

##### File
Te muestra si un objeto es un directorio o un archivo.

##### Mv
Mueve un archivo o directorio a una ruta especifica.

##### Chmod
Establece permisos de archivos y carpetas. En sistemas UNIX se tienen 3 tipos de permisos.

###### Types of permisions:
- r = read
- w = write
- x = execute

###### Who can recieve the permisions?
- u = user : user owner of the file
- g = group : group owner of the file
- o = 0ther : the rest of users of the system
-  a = all : all user classes

###### Operands
- *+* : assigns user classes new file right. Only affected data rights are verwritten.
- *-* : The operand '-' removes file right from a user class.
- *=* : Should the file rights of a user class be reset, then the operand '=' is used.
###### Octal notation

For permissions
- *0* : no rights
- *1* : execution
- *2* : writing
- *4* : reading
For classes
- *1* : class user
- *2* : class group
- *3* : class others

###### Example
```shell
# this afects the User,Group and other classes with a + witch grants Read and Write permissions
chmod ugo+rw example.txt

#Referencing all the user classes
chmod a+rw example.txt

#Using octal notation
	# Gives all permision to user, group and other classes
chmod 777 example.txt

```

##### Chown 
Change propietary of a file.

###### Use
```shell
# Change user owner
chown usuario prueba.txt

#Change user and group owner
chown usuario:grupo prueba.txt

#Change group
chown :group prueba.txt
```

##### Grep
Allows to search for text strings and words inside a text ficher or from standard input from terminal.

##### Wget
Allows to download content from web servers.

- *-b* : Goes to the background after starting.
- *-q* : Silent (Without text output)
- *-c* : Continua una descarga parcial de un archivo.

##### Ps
Shows all the active processes.

Options:
- *-e* : se info about all the processes
- *-j* : see info about PGID and SID
- *-l* : see lots of info about processes
- *-f* : see params wich were use in the up of the processes
- *-a* : shows the processes of other users
- *-u* : usr sees info about other users processes

##### Top
Shows the use of the system in real time and a list of the processes that are running.
##### Free
Shows info about the use of memory (Static result).
```shell 
# This will allow to watch the mem in a dinamic way
watch -n 1 -d free
```

##### Uptime
Indicates the local time, the time the system has been active, the number of users connected and the average load on the system in the last 1, 5 or 15 minutes.

##### Ip a
Shows the addressing IP of the device.
##### Ifconfig
Shows the IP addressing of the device.
##### Whoami
Shows the user active in the sesion.
##### Traceroute
Trace the jumps on the network that are needed to arrive to a destination.
##### History
Shows the list of the history of commands used during the session.
Options: 
- *-c* : delete the list of history, all entries.
- *-d* : delete the entry on the given position.
##### Man
Shows info about other commands.

## Groups
Ver archivo de grupos:
```shell
cat /etc/group
```

##### List of groups
```shell
cut -d : -f 1 /etc/group
```

##### What groups does a user belong in?
```shell
cat /etc/group | grep usuario | cut -d: -f1
```
#### Create a group
```shell
sudo groupadd grupo1
# Verify
cut -d : -f 1 /etc/group | grep grupo1
```

#### Delete group
```shell
sudo groupdel grupo1
```

#### Structure
Example:
```yaml
sudo:x:27:ubuntu, usuario
```
- *sudo*: el nombre del grupo
- *X* : Una contraseña cifrada, sin embargo, esto por regla no se utiliza
- *27* : El número de identificación del grupo GID
- *Ubuntu, usuario* : Es un listado de los usaurios que peretenecen al grupo separados por comas.

## Users
Users archive
```shell
cat /etc/passwd
```

##### Structure
ubuntu:x:1000:1000:Usuario de Ubuntu:/home/ubuntu:/bin/bash
- *ubuntu* es el alias del usuario que utiliza para registrarse  
- *x* representa que la contraseña cifrada se encuentra en /etc/shadow  
- *1000* es el número de identificación del usuario *UID*.  
- *1000* representa el número de identificación del grupo principal al que pertenece el usuario, lo que se conoce como *GID*
- *Usuario de Ubuntu* es la información adicional que has proporcionado al crear la cuenta en cuestión, así aparecerán el nombre de usuario y otros datos que defines durante la creación del nuevo usuario  
- */home/ubuntu* es la ruta de inicio del nuevo usuario, la carpeta personal del usuario  
- */bin/bash* es el shell que utiliza el usuario en cuestión
#### Create user
```shell
sudo adduser usr1
```
#### Delete user
```shell
sudo deluser usr1
```
#### Add user to group
```shell
sudo usermod -a -G group1 usr1
# Verify
groups usr1
```

## Permisions of users, directories or files

![[Pasted image 20230420233433.png|600]]

File type:
- *dr* : Directory
- *-* : Archive

## Directorios importantes
- / 
	- Es la raiz del ssitema
- /bin 
	- Aplicaciones banarias
- /boot 
	- Archivos de configuración del arranque, nucleos, etc.
- /dev 
	- Archivos de los dispositivos
- /etc 
	- Archivos de configuración, scripts de arranque
- /home
	- Directorios personales de los usuarios
- /lib 
	- Librerias del sistema
- /lost+found 
	- Directorio para archivos por de bajo del directorio raiz.
- /media 
	- Particiones montadas automáticamente del disco duro y medios extraibles.
- /mnt 
	- Sistemas de atchivos montados manualmente en el disco duro
- /opt 
	- Ubicación donde se instalan aplicaciones opcionales (de terceros)
- /proc
	- Directorio dinámico especial que mantiene información sobre el estado del sistema, incluyendo los procesos actualmente en ejecución
- /root 
	- Directorio personal del usuario root (superuser)
- /sbin
	- binarios importantes del sistema
- /srv
	- Puede contener archivos que se sirven a otros sistemas
- /sys
	- Archivos del sistema
- /tmp
	- Archivos temporales
- /usr
	- Aplicaciones y archivos a los que puede acceder la mayoria de los usuarios
- /var
	- Archivos variables como archivos de registros y bases de datos
- ~
	- En Macos y Linux podemos usar la negación como ruta directa a la carpeta principal del usuario en users.
