# Processes 3
- *exit()* Ask operating system to delete process
- *Return data* to parent process from child (via **wait()**)
- *abort()* terminate child process from parent
	- exceeded allocated resources
	- tsk of child nor needed anymore
	- Parent is exiting
### Termination
- Cascading termination: parent exits, so all childs are not allowed to exist (initiated by the OS)
