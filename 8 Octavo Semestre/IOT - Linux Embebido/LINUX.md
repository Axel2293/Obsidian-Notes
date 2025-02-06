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