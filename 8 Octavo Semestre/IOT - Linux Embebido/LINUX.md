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
		printf("En proceso Hijo\n");
		sleep(1);
	}
}

void parent_process(int fd) {
	char buffer[LEN];
	
	for(;;) {
		char * str = fgets(buffer, LEN, stdin);
		int len = write(fd, buffer, LEN);
	}
}

int main(int argc, char * argv[]) {
	// Create file drespriptors for pipe
	int fds [2]; 
	
	pid_t pid = fork();

	int ret = pipe(fds);

	if(pid = 0) {
		child_process(fds[0]);
	} else if(pid > 0) {
		parent_process(fds[1]);
	} else {
		printf("Error al crear processo hijo\n");
	}
	
	return 0;
}
```