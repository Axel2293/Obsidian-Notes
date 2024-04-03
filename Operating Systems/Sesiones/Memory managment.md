MMU - Memory Management Unit
# Background
Bring memory fron source to main memory (RAM)
Main memory and registers are CPU exclusive.
Register access is done in one CPU clock (or less).
## Protection
Processes get assigned a chunk of memory, and they are not allowed to go under or above that limit (overflow, underflow)
## Binding
Address binding of instructions and data to memory addresses can happen in:
- Compile time:
- Load time
- Execution time: libraries
	- Requires memory mapping (base, base+limit)
## Logical vs Physical address Space
- Logical: assigned by the CPU and are known as *virtual address*
- Physical: address seen by the *memory unit*
## MMU
Hardware device that at run time maps virtual to physical address.
# Variable Partition
- First fit: allocate the first hole that is big enough
- Best-fit: allocate the samallest hole that is big enough, must search entire list, unless ordered by size.
- Worst-fit: allocate the larget hole
## Fragmentation
- External: required space exists but its not *contiguous*
- Internal: allocated is bigger than needed memory (difference is part of internal partition)

# Paging
Assign chunks of memory depending of the requested size.
4k default, changeable in linux