### Extern keyword
An external variable is one *whose value can be accessed and changed by another module* (file).
Functions contained in separate files can communicate through external variables
This keyword allows global variables to be accessed from other modules:
```c
extern int moveNumber;
```
Now, the value of moveNumber can now be accessed and modified by the module in which the preceding declaration appears.

### Vs Static
This means that the variable will be "static to the whole module". Works as static from Java.

If you need to define a global variable whose value does not have to be accessed from another file
- Use *static*
- a cleaner approach to programming