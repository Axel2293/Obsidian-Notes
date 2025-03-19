Type qualifiers can be used in front of variables to give the compiler more information about the intended use of the variable
- Helps with optimization
We will discuss the const, colatile, and restrict type qualifiers un the upcoming 
C90 added two new type qualifers
 - Constancy and volatility
# Const
The compiler allows you to associate the const qualifier with cars whose vals will not be changed by the program
- You can tell the compiler that the specified variables have a constant value through the program's execution
If you *assign a value* to a const var after initializing it
- the compiler might issue an error message, although it is not required to do so
One of the motivations for this that *it allows the compiler to place your const variables into read-only memory

