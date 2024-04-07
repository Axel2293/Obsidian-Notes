### Static
This memory persists during the whole execution of the program.
### Stack
Stores temporary variables
- Used for vars created inside functions
- Easier to keep track of because the memory is only locally available in the function.
The stack grows and shrinks as variables created and destroyed inside a function
- Every var created is *pushed* onto the stack
- Every time a function exits, all of the variables pushed onto the stack by that function, are *freed (deleted)*
It has a limit on the size of the variables that can be stored on the stack

If a program tries to put too much info on the stack, **stack overflow** will occur
- Also occurs in recursive situations
- Happens when all the mem in the stack has been allocated, and further allocations begin *overflowing* other sections of memory.
### Heap
