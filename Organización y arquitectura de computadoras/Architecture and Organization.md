En resumen, la arquitectura de una computadora establece los principios y las directrices abstractas que guían su diseño, mientras que la organización se refiere a la implementación física y concreta de esos principios en una máquina específica. Ambos conceptos son esenciales para comprender cómo funcionan las computadoras y cómo se diseñan y fabrican.
## Organization
Refers to the operational units and their interconnections that realize the architectural specifications.

Includes those hardware details transparent to the programmer, such as:
- Control signals
- Interfaces between the computer and peripherals.
- The memory technology used
- Arithmetic Co-Processor

#### Contains
- Interconexión 
- de unidades funcionales
- Tipos de memorias
- Señales de control

##### Example of organization
![[Screenshot 2023-09-05 at 8.52.42 a.m..png]]
## Architecture
Refers to those attributes of a system visible to a programmer or, put another way, those attributes that have a direct impact on the logical execution of a program. It is about the hardware-software interface.

Architecture attributes or Instruction Set Architecture (**ISA**):
- Operations
- Control flow instructions
- Number of bits used to represent various data types (8, 16, 32 bits)
- I/O mechanisms (memory mapped peripherals)
- Addressing methods

Is about designing a computer that is well suited for its purpose.

Determine what attributes are important for a new computer, then design a computer to maximize performance and energy efficiency while staying within cost and power.

Aspects of the architecture:
- Instruction set design
- Functional organization
- Logic design
- Implementation

#### Contains
- ISA
- Ancho de palabra (ej: 32 o 64 bits)
- Endianness

![[Screenshot 2023-09-05 at 8.53.23 a.m..png]]

### ISA
The ISA sits between the software and the hardware, providing a consistent interface to the software across hardware generations.

![[Screenshot 2023-09-05 at 8.57.10 a.m..png]]

The ISA provided a standardized way to expose the features of a system's hardware that allowed manufacturers to innovate and fine-tune that hardware for performance without worrying about breaking the existing software base.
![[Screenshot 2023-09-05 at 8.53.57 a.m..png]]


## RISC
Reduced instruction set computer

