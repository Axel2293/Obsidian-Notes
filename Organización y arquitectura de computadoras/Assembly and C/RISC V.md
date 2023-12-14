- Complemento A2: 
	- Forma de diferenciar entre numeros negativos y positivos
	- Usa el bit más significativo.
	- Priero se hace un not al numero y luego se le suma uno, asi transformamos el numero a negativo
- IEEE 754 -float and double formats
- hexadecimal, decimal and binary conversions

32 bit instruction formats
- R: Registry
- I: Instant
- S: Store

### Registros
Tenemos 32 registros para enteros y 32 para punto flotante, cada uno es de 32 bits.

![[Pasted image 20230919185013.png|300]]

Cada registro tiene un proposito diferente, por ejemplo t0-6 son registros temporales.
#### Opcode
Firma o identificador del tipo de instrucción(R,I,S, etc). Esto no dice directamente que instrucción es.

#### RD
Destino de el resultado.

#### RS
Origen de los datos a utilizar.

### Hardcoded immediate constants
A = B+C -> R
Two vars and no hard coded data (Registry)


A = B+1 -> I
One var and one hardcoded data (constant)

A = 1 + e -> two hard coded data (constants)
Not supported by the architecture.
### Immediate
Its generally an offset to move through memory.
## R instruction (Registry)

## I instruction (Immediate)
2 registries and 1 immediate (hardcoded constant)

## S instruction (Store)
Store something from a registry to the memory

- Opcode: 0x23
- ImmX: offset added to Rs1
- funct3: Specific variant of function

## B Conditional branches

- Opcode: 0x63
- Immediate: **n** Offset added to PC (Program counter), in theory this offset serves as a control to move through the instructions.

## U long immediate
- Opcode: 
	- lui: 0x37
	- auipc: 0x17
- Immediate: Value to add to PC or to store on register

## J Unconditional jump
JAL: Jump through the PC to move to another function or position on the program.