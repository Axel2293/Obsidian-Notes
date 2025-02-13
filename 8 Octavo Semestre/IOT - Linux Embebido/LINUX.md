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