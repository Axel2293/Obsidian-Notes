Pandas is a library specialized for data analysis, it has two major data structures:
- Data Frames - 3 Dimension
- Series - 1 Dimension

### Read CSV
To read a CSV we have to do:
```python
df = pandas.read_csv('dataset-25346.csv',encoding='utf-8')
```

### Deep copy
We can perform a deep copy with a function on pandas with the data that we had read:
```python
cp = df.copy()
```

### Columns
Get columns names with df.columns()

### Get rows with index range
We can use iloc to get the rows in the indexes that we want using slice:

*gets the rows from 10 to 19*
```python
df.iloc[10:20]
```

*We can also use it to locate specific variable values*
```python
df.iloc[df.celltype == "squamous" & (df.karno < 50)]
```

## Decide levels of measurments
```python
nominales = ['trt', 'celltype', 'status','prior']

ordinales = ['karno'] # Pudiera considerarse de intervalo siendo flexibles y no ortodoxos

#intervalo

razon = ['time', 'diagtime', 'age']
```


# LOC
With LOC we can create sub data sets with the data that we need, for exaple:
```python
#Podemos crear nuevos data frames a partir de ciertos datos o categorias
data_stroke = data.loc[data.stroke == 1]
data_stroke
# Nos da un data set donde solo hay filas con stroke=1
```
