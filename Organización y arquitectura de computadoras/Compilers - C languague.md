### File types
- .*c* 
	- Source code
- .*h*
	- headers, functions firms, data types, structures
- .*i*
	- Pre-processing results
- .*s*
	- Assembler code
- .*o/ .obj*
	- byte code, binary data before linking
- *.out/ .exe*
	- Result of compiling and linking, the final executable.

### Preprocessor directives
- \#include
- \#if
- \#ifdef
- \#ifndef
- \#endif
- \#define
- \#undef

## Generation of executable program
- **Preprocessor**
	- It expands shorthands, called macros, into source language statements.
- **Compiler**
	- Produce an assembly-language program.
- **Assembler**
	- processed by a program called an assembler that produces relocatable machine code as its output.
- **Linker**
	- Resolves external memory addresses, where the code in one file may refer to a location in another file.

![[Pasted image 20230907113418.png|300]]

### Compiling process
Program that can read a program in one language (source language) and translate it into an equivalent program in another language (target language).

Maps a source program into a semantically equivalent target program.

Interface between the programmer and the machine.
![[Pasted image 20230907114656.png|500]]
The compiling process can be divided into:
- **Analysis (Front end)**:
	- Breaks up the source program into constituent pieces and imposes a grammatical structure on them.
	- Uses the structure to create an intermediate representation of the source program.
	- If the analysis detects that the source program is either syntactically ill formed or semantically.
- **Synthesis (Back end)**:
	- Constructs the desired target program from the intermediate representation and the information in the symbol table.
![[Pasted image 20230907120711.png|200]]

- **Front end**
	- *Lexical analysis*:
		- reads the stream of characters making up the source program and groups the characters into meaningful sequences called lexemes.
		- For each lexeme, the lexical analyzer produces as output a token of the form: ***<token-name, atribute-value>***
		- 5 types of tokens:
			- Identifiers: variable
			- Constants: 3,5,10, etc
			- Operators: +,-,\*, if, else, etc
			- Delimitors/Separators
	- *Syntax (parsing) analysis*:
		- Parsing checks for syntax of our statements
		- Uses the first components of the tokens produced by the lexical analyzer to create a tree-like intermediate representation that depicts the grammatical structure if the token stream.
		- ![[Pasted image 20230907122214.png|300]]
	- *Semantic analysis*:
		- Uses syntax tree and the info in the symbol table to check the source program for semantic consistency with the language definition.
		- Gathers type info and saves it in either the syntax tree or the symbol table, for subsequent use during intermediate-code generation
		- type checking is important, it checks that every operator has matching operands.
		- The language may permit some type conversions called **coercions**.
- **Intermediate code generation**
	- After syntax and semantic analysis of the source program, many compilers generate an explicit low-level or machine-like intermediate representation, which we can think of as a program for an abstract machine.
	- Should have two important properties:
		- Easy to produce 
		- Easy to translate
	- ![[Pasted image 20230907122934.png|300]]
- **Back end**
	- Code optimizer:
		- Improve the intermediate code so that better target code will result.
		- Shorter code or target code that consumes less power.
		- ![[Pasted image 20230907123431.png|300]]
	- Code generation:
		- Takes as input the intermediate representation of the source program and maps it into the target language.
		- If the target language is machine code, registers or memory locations are selected for each of the variables used by the program.
		- The intermediate instructions are translated into sequences of machine instructions that perform the same task
		- Crucial aspect of code generation is the judicious assignment of registers to hold variables.
		- ![[Pasted image 20230907124128.png|300]]
![[Pasted image 20230907124314.png]]

### Linking
Its what produces the final compilation output from the object files the compiler produced. This output can be either a shared of dynamic library or an executable.

- It links all the object files by replacing the references to undefined symbols contained within them with the correct addresses. If they are defined in libraries other than the standard library, you need to tell the linker about them.
- Most common errors are missing definitions or duplicate definitions.
- ![[Pasted image 20230907125109.png]]
- ![[Pasted image 20230907125132.png|300]]
##### Requirements
- Merging segments of code
- Allocate target memory (RAM, ROM, stack, special areas)
- Product files for debugging (symbols, line numbers)
- Produce files for target (mirror of memory)

### Building
The compiling processes made by the compiler and consists on two main processes with some processes between them
- Compiling
- Linking

The total *process of going from source code to an executable* might better be referred to as a **build**.

