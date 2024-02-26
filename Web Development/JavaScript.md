Responsible for manipulating the web page, user interaction, and the web server.
It cannot execute programs directly through the OS, cannot read/write hard disk.

## ECMAScript Specification
JavaScript is based on the *ECMAScript* specification, standard for script languages.
ES6 is the specification with most support.
Currently, the latest version is ES14 (ECMAScript 2023). This note will focus on **ES6** and **ES7**

## JS in HTML
We can create a script element in HTML, and inside we can write JS code.

## Objects
Store complex data.

They can be a collection of properties and values (key-value pairs).![[Pasted image 20240226172633.png]]
### Accessing properties
![[Pasted image 20240226172900.png]]
![[Pasted image 20240226173236.png]]
### Builder functions
![[Pasted image 20240226173303.png]]
### Constructor
##### Function
![[Pasted image 20240226173642.png]]
##### Class
![[Pasted image 20240226173703.png]]
![[Pasted image 20240226173717.png]]
## Comparing Objects
== and === operators compare the reference, not the content.
![[Pasted image 20240226174131.png|450]]
![[Pasted image 20240226174152.png]]
#### Shallow copy
![[Pasted image 20240226174350.png]]
#### Deep copy
![[Pasted image 20240226174408.png|500]]

## Existence of properties
### In
Operator that determines if a property exists in an object.
![[Pasted image 20240226175407.png]]
### hasOwnProperty
Method
![[Pasted image 20240226175445.png]]
### For in loop
![[Pasted image 20240226175508.png]]
### Object.keys(obj)
Method that returns the keys in the object
![[Pasted image 20240226175647.png]]

## This keyword
Refers to the object that is executing the current function.
![[Pasted image 20240226175753.png]]
![[Pasted image 20240226175814.png]]

## Getters and Setters