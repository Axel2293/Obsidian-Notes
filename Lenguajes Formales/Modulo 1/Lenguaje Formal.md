Basado en la definición y aplicación de reglas especificas.

### Lenguaje de programación
- se conforma de una serie de símbolos y reglas de sintaxis y semántica que definen la estructura principal 

##### Otros lenguajes
- El matemático (5+2 = 7)
- Los LF no son ambiguos, no son redundantes si no concisos.

## Simbolos
#### Conjunto Vacio
∅ es el simbolo
#### Cadena Vacia
λ = Ɛ
#### Longitud
|Ɛ|=0
#### Dentro de un conjunto
| {Ɛ} |


### Concatenación
El orden es importante
x=01101
y=110

- xy=01101110
- yx=11001101
Ejercicio

∑={a,b}
∑^4=?

∑^1={a,b}
∑^2={{a,a},{a,b},{b,a},{b,b}}
∑^3={{a,a,a}, {a,a,b}, {a,b,b}, {b,b,b}, {b,b,a},{b,a,a},{b,a,b},{a,b,a}}
∑^4={ {a,a,a,a}, {a,a,a,b}, {a,a,b,b}, {a,b,b,b}, {b,b,b,b}, {b,b,b,a}, {b,b,a,a}, {b,a,a,a}, {b,a,a,b}, {b,a,b,b}, {b,b,a,b},{b,a,b,a},{a,b,a,a},{a,a,b,a},{a,b,b,a},{a,b,a,b}}

Conjunto infinito con {Ɛ}
| ∑^* | =  | ∑^0 | + | ∑^1 | + | ∑^2 | + ....

Conjunto infinito sin {Ɛ}
| ∑^+ | =  | ∑^1 | + | ∑^2 | + ....

# Operaciones con Lenguajes
AB = {wx | w  }


### Ejercicios
1. Si A = {a, ab}, obtener A^n para n=0,1,2,3
A^0= {Ɛ}
A^1={a,ab}
A^2={aa,aab,aba,abab}
A^3={aaa,aaab,aaba, aabab, ababab, abaa, ababa,abaab}

{a, ab}
 |    |
{a, ab}
 |    |
{a, ab}

2. Si A = {Ɛ, 0,1,10,11} y B = {Ɛ, 1,0110, 11010}, obtener 
	1. A U B
		1. = {Ɛ, 0,1,10, 11, 0110, 11010}
	2. A ∩ B
		1. = {Ɛ, 1}
3. Sean A = {the, my}, B = {ß} y C = {horse, house, hose}
	1. ABC
		1. {theß, myß} -> {theßhorse, theßhouse, theßhose, myßhorse, myßhouse, myßhose}
	2. CBC
		1. {horseß, houseß, hoseß} -> {horseßhorse, horseßhouse, horseßhose, houseßhorse, houseßhouse, houseßhose, hoseßhorse, hoseßhouse, hoseßhose}

# Automáta Finito

#### STATE  | INPUT SYMBOL
-----------------------
                   0                  1
q1                q2               q3
q2               q2               q2
q3               q3               q3

| STATE | INPUT | INPUT |
| ----- | ----- | ----- |
| ----  | 0     | 1     |
| q1    | q2    | q3    |
| q2    | q2    | q2    |
| q3    | q3    | q3    |

->f(q1, 0) = q2
f(q1, 1) = q3
f(q2,0) = q2*
f(q2,1) = q2*
f(q3,0) = q3
f(q3,1) = q3