These are local variables, overall. 

# Storage classes
Used to describe the features of a variable/function
- Include the scope, visibility, and lifetime
- help us to trace the existence of a particular variable during the runtime of a program.
##### Life-time of a variable
Is the time period during which a variable exists in computer memory

# Auto Storage Class
C provides *four storage classes*, indicated by their storage class specifiers.
- auto
- register
- extern
- static
The four can be split into two storage durations
- auto storage duration
- static storage duration

Keyword auto is used to declare variables of automatic storage duration
- Created when the block in which they are defined is entered
- Exist while the block is active

# Local variables
All local variables in C *have automatic storage duration* by default.
- Declared within a *function body* or *block of code*
- Same as just using the type and identifier.
```C
int main(){
	auto int i = 0; // Local variable

	int j = 0; // Also local variable
}
```

# External Variables
Inside the module that wants to access the external variable
- Tells the compiler that a *globally defined* variable from *another file* is **to be accessed**.

#### On variables
```C
//FILE 1
int i = 5;

int main(){
	printf("%d", i);
	foo();
	printf("%d", i);
}

//FILE 2

void foo(){
	extern int i;
}

```
### On functions
Applies the same, but to functions

# Static
Used on *local*, *global* and *functions*

Static variables
Making local variables static allows them to maintain their values between function calls.
- Does not create and destroy the local variable each time it comes into and goes out of scope

### For local variables
When applied to local variables it instructs the compiler to **keep the variable in existence** during the life-time of the program.
#### For global variables
Causes that variables **scope to be restricted** to the file in which it is declared
- Cleaner approach to programming
- The static declaration defines more accurately the use of the var

#### For functions
The static function can only be called from within the same file as the function appears.

# Register
The register storage class defines local variables that *should be stored in a* **register** instead of ***RAM***.

```C
int main(){
	register int x;
	
}