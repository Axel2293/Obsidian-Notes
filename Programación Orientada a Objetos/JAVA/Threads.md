Execute multiple lines of code at the same time on different threads.

## Create a thread with our code
To create a thread we have to extend the *Thread class* and override the run method.
```java
public class Multithreading extends Thread{
	@Override
	public void run(){
		//Code to run
	}
}

```
## Start the execution on the created thread
```java
//After creating the thread class we can instance one
public static void main(){
	Multithreading t1 = new Multithreading();
	//Start the thread with
	t1.start();
}
```

## Join

# Runnable interface
This gives the posibility to extend another class instead of the *Thread* one, the only difference is that we have to give the instange that implements the Runnable interface to a new Thread instance.

```java
public class Multithreading implements Runnable{
	@Override
	public void run(){
		//Code to run
	}
}
```

### Execution of a Runnable class
```java

public static void main(){
	// Instance the class that implements the runnable 
	Multithreading r1 = new Multithreading();
	//Create the Thread
	Thread t1 = new Thread(r1);
	//Start the thread with
	t1.start();
}
```

# Use of Executors
We can use the *java.util.executors* library to hande the execution and creation of the threads.

```java
Executors.newSingleThreadExecutor().execute(new Runnable() {
	@Override
	public void run(){
		loginAcount();
	}
});
```