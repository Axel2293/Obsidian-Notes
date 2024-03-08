Requerimientos para entrar a una sección crítica.
- Mutual exclusion
- No livelock
- 
# Semaphore
More sophisticated ways
### Wait()
```c
wait(S){
	while(s<=0)
		// Busy wait
	
}
```
- *Counting semaphore*: controls available resources or "tickets".
- *Binary semaphore*: integer that only has two resources.
	- Same as mutex lock
Each entry in a waiting queue has two data items:
- *Value* (of type integer).
- Pointer to next record in the list.
Two operators results on processes:
- *block*:
- *wakeup*
# Mutex
Un mutex tiene **ownership**, lo cual lo hace diferente a un semáforo.
