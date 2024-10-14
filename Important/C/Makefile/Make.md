# First Steps
First we will install make with homebrew.
```shell
brew install make
```

Create a file named Makefile and add the instructions and rules.
```make
targets: prerequisites 
	command 
	command 
	command
```

# Makefile Guide  
## Introduction  
Make is a build automation tool that automatically builds executable programs and libraries from source code by reading files called Makefiles. This guide will help you understand how to create and use Makefiles for your projects.  ## Basics  ### Makefile Structure  A Makefile consists of rules, each specifying how to derive a target from its dependencies. The basic structure of a rule is:  
```make 
target: dependencies     
	commands
```

- **target**: The file or action to be created. It's what you want `make` to build.
- **dependencies**: Files or actions required to build the target. If any of the dependencies are newer than the target, the commands will be executed.
- **commands**: Shell commands to build the target.

### Example
```make
output: main.c utils.c     
	gcc -o output main.c utils.c
```
In this example, `output` is the target, and `main.c` and `utils.c` are the dependencies. The command is `gcc -o output main.c utils.c`.
## Variables

Makefiles support variables to make them more flexible and maintainable.

```make
CC = gcc 
CFLAGS = -Wall  
output: main.c utils.c     
	$(CC) $(CFLAGS) -o output main.c utils.c
```
Here, `CC` is the compiler, and `CFLAGS` are the compiler flags. Using variables makes it easier to change the compiler or add flags.

## Phony Targets

Phony targets are not associated with files. They are used for tasks like cleaning or running tests.

```make
.PHONY: clean  
clean:     
	rm -f output
```
The `.PHONY` target tells `make` that `clean` is not a file, preventing potential conflicts.

## Automatic Variables

Makefiles provide automatic variables for convenience in rules.

- `$@`: The target.
- `$^`: All dependencies.
- `$<`: The first dependency.
```
output: main.c utils.c     
	$(CC) $(CFLAGS) -o $@ $^
```
Here, `$@` is equivalent to `output`, and `$^` is equivalent to `main.c utils.c`.

## Pattern Rules

Pattern rules define how to build multiple targets using a pattern.
`%.o: %.c     $(CC) $(CFLAGS) -c $< -o $@`
This rule builds any `.o` file from the corresponding `.c` file.

## Conditional Statements

Conditional statements can be used to apply different rules based on conditions.
```
DEBUG = yes  
ifeq ($(DEBUG),yes)     
	CFLAGS = -g 
else     
	CFLAGS = -O2 
endif  

output: main.c utils.c     
	$(CC) $(CFLAGS) -o $@ $^
```
This example sets different compiler flags based on the value of the `DEBUG` variable.