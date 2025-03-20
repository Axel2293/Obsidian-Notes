# Makefile
*Template*
```Makefile
CC ?= gcc
CXX ?= g++
CPP ?= g++

APP_NAME = <appname>
OBJFILES = <appname>.o
LIB_DIRS = .

all: $(APP_NAME)

$(APP_NAME): $(OBJFILES)
	$(CC) $^ -o $@ -L$(LIB_DIRS)

%.o: %.c
	$(CC) -c $^ -o $@ -g

clean: 
	rm *.o $(APP_NAME)

fresh:
	make clean
	make all
```
Por cada ejecutable, se debe de tener un APP_NAME diferente y OBJFILE diferente.
## Pipes
- Half duplex
- Un solo sentido
- Named pipes
- Unnamed Pipes

```C
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

#define LEN 100

void child_process(int fd) {
	char buffer[LEN];
	for(;;) {
		// Read from the pipe onto the buffer
		int ret = read(fd, buffer, LEN);
		printf("Message from parent %s\n", buffer);
		// Clean the buffer
		memset(buffer, 0, LEN);
	}
	close(fd);
}

void parent_process(int fd) {
	char buffer[LEN];
	pid_t cpid;
	int status;
	
	for(;;) {
		// Read from STDIN
		char * str = fgets(buffer, LEN, stdin);
		// Write to buffer
		int len = write(fd, buffer, LEN);
	}
	cpid = wait(&status);
	close(fd);
}

int main(int argc, char * argv[]) {
	// Create file drespriptors for pipe
	int fds [2]; 
	
	pid_t pid = fork();

	int ret = pipe(fds);

	if(pid == 0) {
		child_process(fds[0]);
	} else if(pid > 0) {
		parent_process(fds[1]);
	} else {
		printf("Error al crear processo hijo\n");
	}
	
	return 0;
}
```

### Write program
```c
#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

#define LEN 80
#define MY_FIFO "/tmp/my_fifo"

int main(int argc, char *argv[]) {
	char buffer[LEN];
	// Crear el fifo/archivo
	int ret = mkfifo(MY_FIFO, S_IFIFO, | 0666);
	// Abrir el fifo
	int fd = open(MY_FIFO, O_WRONLY);
	
	for (;;) {
		// Leer de STDIN
		char * str = fgets(buffer, LEN, stdin);
		// Escribir en el buffer
		int len = write(fd, buffer, LEN);
	}
}
```
### Read program

# Sockets
- Punto de comunicaciín que podemos direccionar 
## Network Sockets
- De forma jerárquica el uso de sockets contempla:
	- Host identificado por una IP
	- Protocolo TCP o UDP
	- Puerto, interfaz de la aplicación al socket. Puertos son únicos en el host.
- Direccionamiento a un servicio o aplicación remota necesita (protocolo, IP, Puerto).
## Socket API
- i


# OpenCV
- open Source Computer Vision
	- Framework to work with images video
	- Algorithm
## CV::MAT
- Primary structure used in openCV for storing data

# Audio Card
``` bash
cat /proc/asound/cards

# Record and play
arecord -D hw:0 -f S32_LE -c 2 -r 48000 | aplay -D plughw:1 -f S32_LE -c 2 -r 48000

# Record and visualize the sound
arecord -D hw:0 -f S32_LE -c 2 -r 48000 test.wav -Vstereo

```
# Events ALSA
Open interface for capture or playback
set hardware parameters
(access mode, data format, channels, rate, etc.)
while there is data to be processed:

## PLugins
Plugins son usados para crear dispositivos virtuales que pueden actuar como hardware pero con procesamiento
```
cd /lib/modules

insmod /lib/modules/5.15.71..../extra/snd-soc-tfa98xx-orig.ko

cat /proc/

aplay -Dmyvol /dev/urandom
```

```


















































































root@pico-imx8mm:~# cat /etc/asound.conf
defaults.pcm.rate_converter "linear"

pcm.dmix_48000{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:1,0"
period_time 40000
format S16_LE
rate 48000
}
}

pcm.dmix_44100{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 44100
}
}

pcm.dmix_32000{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 32000
}
}

pcm.dmix_24000{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 24000
}
}

pcm.dmix_22050{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 22050
}
}

pcm.dmix_16000{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 16000
}
}

pcm.dmix_12000{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 12000
}
}

pcm.dmix_11025{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 11025
}
}

pcm.dmix_8000{
type dmix
ipc_key 5678293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 8000
}
}

pcm.!dsnoop_48000{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S32_LE
rate 48000
}
}

pcm.!dsnoop_44100{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 44100
}
}

pcm.!dsnoop_32000{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 32000
}
}

pcm.!dsnoop_24000{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 24000
}
}

pcm.!dsnoop_22050{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 22050
}
}

pcm.!dsnoop_16000{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 16000
}
}

pcm.!dsnoop_12000{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 12000
}
}

pcm.!dsnoop_11025{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 11025
}
}

pcm.!dsnoop_8000{
type dsnoop
ipc_key 5778293
ipc_key_add_uid yes
slave{
pcm "hw:0,0"
period_time 40000
format S16_LE
rate 8000
}
}

pcm.myvol{
type softvol
slave.pcm "dmix_48000"
control.name "Softmaster"
control.card 1
}

pcm.asymed{
type asym
playback.pcm "myvol"
capture.pcm "dsnoop_48000"
}

pcm.dsp0{
type plug
slave.pcm "asymed"
}

pcm.!default{
type plug
route_policy "average"
slave.pcm "asymed"
}

ctl.!default{
type hw
card 0
}

ctl.mixer0{
type hw
card 0
}

pcm_slave.esai{
        pcm "hw:0,0"
        channels 8
        rate 48000
        period_time 40000
}

pcm.esaich1to6{
        type dshare
        ipc_key 5778293
        slave esai
        bindings.0 0
        bindings.1 4
        bindings.2 1
        bindings.3 5
        bindings.4 2
        bindings.5 6
}

pcm.esaich78{
        type dshare
        ipc_key 5778293
        slave esai
        bindings.0 3
        bindings.1 7
}
root@pico-imx8mm:~#
 
```

# Input Subsystem
# I2C
## dht20
![[Pasted image 20250312181902.png]]
## Command Line
- Interfaces presentadas como archivos en /dev/i2c-X
	- X es el número del bus de I2C
- i2ctools
# SPI - spidev
- Interfaces presentadas como archivos en /dev/spidevX.Y
	- <X> 