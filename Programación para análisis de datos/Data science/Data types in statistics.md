
### Quantitative data 
Data that can be measured with numbers like dimensions of height, length, temperature, humidity, area or volume.
##### Discrete data
Son un recuento que **no se puede hacer más preciso**. Normalmente se trata de números enteros como, por ejemplo, la cantidad de niños en su familia. Este dato es discreto por que esta **contando entidades enteras e indivisibles**, esto por que no puede haber 1.5 niños o 2.4 niños.

##### Continuous data
This data **can be more and more precise as it can be divided and reduced** to more finite levels. One example can be the height of a kid, you can **measure it to more and more precise data so thats why its continuous**.

### Qualitative data.
It refers to characteristics and descriptions that can't be measured easily, but they can be seen easily like smell, taste, texture or color.

##### Binary data
Colocan las cosas en dos categorías mutuamente excluyentes: correcto/incorrecto, 0 o 1, verdadero/falso, aceptar/rechazar.
##### Not ordered or nominal
Asignamos elementos individuales a categorías nombradas que no tienen un valor o rango implícito o natural.
##### Ordered or ordinal
Se asignan a categorías que tienen algún tipo de orden implícito o natural. Por ejemplo "Bajo, Mediano o Alto", otro seria una encuesta que nos pide que ingresemos una calificación en una escala del 1 al 10


### Classified on a high level (Data)
- **Estructurados**:
	- Denotan que los datos representados están en forma de matriz con filas y columnas.
- **Semiestructurados**:
	- Los datos que no están en forma de matriz como los datos en formato XML o JSON.
- **No estructurados**:
	- Podemos considerar a los correos electrónicos, imágenes, audio, videos y datos textuales como datos no estructurados.

## Measure of data in statistics
##### Nominal
**Forma de información que puede almacenarse e identificarse basándose en sus nombres o etiquetas**.

Se usan escalas nominales para etiquetar variables sin ningún valor cuantitativo y podrían llamarse "**etiquetas**".

Pueden ser binarios o dicotómicos cuando tienen dos valores y también pueden ser ordenados o no. También se les llaman **categóricos**.
###### En pandas (Categóricos)
Número limitado, y generalmente fijo, de valores posibles.
	-**Ejemplos**: género, clase social, tipo de sangre, afiliación a un país, tiempo de observación o calificación a través de escalas Likert.
Pueden tener un orden (Ordinales):
	-**Ejemplo:** "totalmente de acuerdo" frente a "de acuerdo" o "primera observación" frente a "segunda observación"), pero las operaciones numéricas (adiciones, divisiones, ...) no son posibles.

Todos los valores están en categorías o **np.nan**

El orden es por categoría, no por orden léxico de los valores.

Internamente consta de un arreglo de categorías y un arreglo de códigos enteros que apunta el valor real en un arreglo de categorías.


![[four-levels-of-measurement-data.jpg]]

With ratio values we can do every statistical analysis that we want because there is a meaningful 0.

