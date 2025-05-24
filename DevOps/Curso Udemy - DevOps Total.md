# Máquinas Virtuales
## Vagrant
# Redes - Networking
## Componentes
- 2 o mas dispositivos
- Cables o redes inalámbricas
- NIC Card
- Dispositivo
- Switchers
- Routers
- Software
## Modelo ISO-OSI
Arquitectura de 7 capas. Desarrollad en 1984.
![[Pasted image 20250524152038.png]]
### Capa 1: Física
- Capa mas baja
- Conexión física de los dispositivos
	- Datos en BITS (1 y 0)
	- Envía a segunda capa
	- Especificaciones maecánicas y electricas
- *HUB*
### Capa 2: Enlace
- Función: asegurarse de no tener errores
- Datos en *FRAMES*
- Dirección MAC, Physical adressing
- *SWITCHES: Bridge, layer 2 switch*
### Capa 3: Red
- Transmisión de datos de un nodo a otro en distintas redes
- Dunciona en dirección IP
- Datos en PACKETS
- Viajan desde fuente hasta destino, así provee internetworking
- *SWITCHERS: Firewall, router, layer 3 switch*
### Capa 4: Transporte
- Toma el servicio de la capa de res y lo proporciona a la capa de aplicación
- Chequeo de coneción a internet y fiabilidad
- Responsable de la entrega del mensaje completo
- Provee reconocimiento
- Retransmite los datos si hay fallas
- *Bases de datos*
### Capa 5: Sesión
- Responsables del la seguridad y mantenimiento de la conexión, cifrado y descifrado, y la presentación de datos
- Establecer, administrar y terminar sesiones
- En el modelo TCP/IP, las capas de aplicación, presentación y sesión se presentan como una sola capa.
### Capa 6: Presentación
- Traducir, encriptar y comprimir datos
### Capa 7: Aplicación
- Permite que sus aplicaciones/software accedan a los recursos de la red
### Capa 8: Pendejo usuario

## Clasificación de redes dependiendo de la geografia
### LAN
*Local Area Network*
### WAN
*Wide Area Network*
Interfaz de red puede estar lejos (Internet)
### MAN
*Metropolitan Area Network*
Municipalidad de ciudades metropolitanas.
### CAN
*Campus Area Network*
Hay computadoras conectadas entre si en unos pocos acres de tierra -intranet
### PAN
*Personal Area Network*
Poco rango, como Bluetooth, hotspot.
## Dispositivos
### Switches
- Facilitan el intercambio de recursos mediante la conexión en conjunto de los dispositivos, incluyendo computadoras,
### Routers

## Direcciones IP
### IPv4
El rango de IPv4 es:
0.0.0.0 - 255.255.255.255
- Cada octeto va a comenzar desde 0 hasta 255
- 32 bites, 8 bites por cada octeto separado por un punto.
- Existen las IP's privadas y publicas
#### Rangos
- *Clase A*: 10.0.0.0 - 10.255.255.255
- *Clase B*: 172.16.0.0 - 172.31.255.255
- *Clase C*: 192.168.0.0 - 192.168.255.255
- *Clase D y E*: Investigaciones y multitareas
## Protocolos
*Conjunto de reglas*
Es una especificación formal que define el procedimiento de comunicación entre emisor y receptor, o viceversa. El cliente y servidor sabe como comunicarse siguiendo dicho protocolo.
Define:
- Formato de la comunicación
- Tiempo
- Secuencia
- Resolución de errores
- Capa 4: transporte
	- Protocolo TCP
	- Protocolo UDP
