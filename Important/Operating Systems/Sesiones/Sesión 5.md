# Processes 3
- *exit()* Ask the operating system to delete the process
- *Return data* to parent process from child (via **wait()**)
- *abort()* terminate child process from parent
	- exceeded allocated resources
	- tsk of child not needed anymore
	- Parent is exiting
### Termination
- Cascading termination: parent exits, so all childs are not allowed to exist (initiated by the OS)
	`pid = wait(&status)`
	- Wait returns the PID of the terminated process and we give the direction of the status for the function to write the value given on the `exit()`

## Cooperating processes
#### **Independent**
Process cannot affect or be affected by the execution of another process
#### **Cooperating**
Process can affect or be affected by the execution of another process
- Information Sharing
- Computational speed-up
- Modularity
- Convenience
## IPC (Interprocess communication)
- Shared memory
- Message passing
