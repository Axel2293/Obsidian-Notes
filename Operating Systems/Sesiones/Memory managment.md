MMU - Memory Management Unit
# Background
Bring memory fron source to main memory (RAM)
Main memory and registers are CPU exclusive.
Register access is done in one CPU clock (or less).
## Protection
Processes get assigned a chunk of memory, and they are not allowed to go under or above that limit (overflow, underflow)
## Binding
Address bindig of instructions and data to memory addresses can happen in:
- Compile time: