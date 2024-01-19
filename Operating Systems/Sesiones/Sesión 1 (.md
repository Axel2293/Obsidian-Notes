## Operating System
Intermediary between a user of a computer and the computer hardware.

- Execute user programs and make solving user problems easier
- Make the computer system convenient to use
- Use the computer hardware in an efficient manner
- Kernel is the heart of the OS, like the supervisor
#### Components
- Hardware: provides basic computing resources
- Operating system
	- Controls and coordinates use of hardware among various applications and users.
- Application programs
	- Define the ways in which the system resources are used to solve the computing problems of the users
	- Word processors, compilers, web browsers, database systems, video games
- Users
	- People, machines, other computers.
### Operation
- I/O devices and the CPU can execute concurrently (If you have more than one core)
- Each device controller is in charge of a particular device type
- Each device controller has a local buffer
- Each device controller type has an operating system device driver to manage it

- Bootstrap-Bios (*Basic Input Output System*) - simple code to initialize the system, load the kernel
- Kernel loads
- Starts *system daemons* (services provided outside of the kernel like TCP/IP)
- Kernel interrupt driven (hardware and software)
#### Drivers
Help the OS use I/O devices. 
- Enumerar un dispositivo al conectar (Identificar dispositivo)
- Buscar un driver para ese dispositivo
- 
#### Interrupts
- Interrupt transfers control to the interrupt service routine generally, through the interrupt vector, which contains the addresses
### Storage
- *Main memory*: only large storage media that the CPU can access directly
	- Random access
	- Typically volatile (Loose info at shutdown)

## Levels of the OS
CENTER
- Layer 1:
	- *KERNEL*: Supervises the use of resources, etc..
- Layer 2:
	- Process communication
	- CPU Admin
	- Process Manager
	- Memory Manager
- Layer 3:
	- Video
	- USB
	- Drivers
	- Ethernet
	- SD Card/ SD I/O
- Layer 4 *Middleware-daemons-HAL*:
	- USB STACK
	- TCP IP STACK
	- File system
	- Custom libraries
	- Security
- Layer 5:
	- **Application**

## Multiprogramming (Batch system)

- Single user can't keep CPU and I/O devices busy
- Organize jobs (CODE-DATA) so CPU always has one to execute
- Subset of total jobs stored in memory
- One job selected and run via *job scheduling*
#### Multitasking Timesharing
- Response time should be <1 second