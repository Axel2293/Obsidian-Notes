## Process
a program in execution; execution goes in sequential fashion. No parallel exec of instructions of a single process

##### Parts
- The program code, also called *text section*
- Current activity including *program counter*,
Program becomes process when an executable file is loaded into memory
One program can be several processes.


#### States
- *New*: The process is being created
- *Running*: Instructions are being executed
- *Waiting*: The process is waiting for some event to occur
- *Ready*: the process is waiting to be assigned to a processor
- *Terminated*: Has finished execution

## Scheduler
Select among available processes for next execution on the CPU core
Goal -- Maximize CPU use, quickly switch processes onto CPU core
Maintains scheduling queues of processes
- *Ready queue*: ready and waiting to execute
- *Wait queue*: waiting because I/O, etc..
#### Context switching
When the CPU switches from one process to another.
Saves the state of the process in the PCB and loads the data when resuming the process
## Multicore programming

### Parallelism
implies a system can perform more than one task simultaneously.
### Concurrency
Supports more than one task making progress
- Single processor/core