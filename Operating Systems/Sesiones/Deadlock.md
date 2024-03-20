Espera circular
When the process are waiting for a semaphore or mutex that is given by another process.
## Conditions for possible deadlock
- *Mutual exclusion*
- *Hold and wait*
- *No pre-emption*
### Actual Deadlock Requires
Needs the other 3 conditions plus (*MUST*).
- **Circular wait**: Chain of processes exists, such that each process holds at least one resource needed by the next process in the chain.
### Avoidance
A desicion is made dynamically whether the current resource allocation request will, if granted, potentially lead to deadlock.
#### Resources
- Consumable
- Reusable