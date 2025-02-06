## Pipes
- Half duplex
- Un solo sentido
- Named pipes
- Unnamed Pipes

```C
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void child_process(int fd) {
	for(;;) {
		printf("En proceso Hijo\n");
		sleep(1);
	}
}

void parent_process(int fd) {
	for(;;) {
		printf("En proceso Padre\n");
		sleep(1);
	}
}

int main(int argc, char * argv[]) {
	// Create child process
	pid_t pid = fork();
	if(pid = 0) {
		child_process(0);
	} else if(pid > 0) {
		parent_process(pid);
	} else {
		printf("Error al crear processo hijo\n");
	}
	
	return 0;
}
```