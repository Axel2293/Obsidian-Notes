### Suma de elementos (i a j)
Nos piden que hagamos una suma de los elementos en un arreglo empezando del indice i a j, entonces si esto lo realizaran varias veces es recomendable hacer precomputo para calcular otro arreglo que contiene la suma de todos lo elementos hacia la izquierda. Esto nos permite calcular la suma en tiempo constante ya que solamente tomamos la suma en el indice j y restamo la suma que esté en i-1.

## Anagrams
Using KMP we can know if a string is a substring and tell if they are anagrams in lineal time.