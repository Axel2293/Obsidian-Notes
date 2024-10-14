Selects processes in the *ready queue* and assigns a CPU to them so that they can execute.
- Queue may be ordered in different ways
Scheduler decitions may be afected by these:
1. wda

The scheduler may be *preemptive* or *nonpreemptive*.

## Race condition and Preemptive scheduler
This algorithm for the scheduler can cause RC as there could be shared resources between processes or threads and interruptions could happen during the execution or use of resources.

# Dispatcher
Dispatcher module gives control of the CPU to the process selected by the CPU scheduler:
- Switching context
- Switching user mode
- Jumping to the proper location in the user program to restart that program

**Dispatch latency**: time it takes for the dispatcher to stop one process and start another running.
