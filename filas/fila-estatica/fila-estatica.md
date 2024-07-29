# Fila Estática

"Fila Estática":
Tipo de "Fila" onde o sucessor
de um elemento ocupa a posição
física seguinte do mesmo
(uso de "array")

```txt
Fila *fi;

   qtd  inicio final
 [  3  |  0  |  3  ]---
          |           | 
          V           V
dados    [  ][33][23][16][  ][  ]
          0                   MAX - 1
```

## Implementando uma "Fila Estática"

"FilaEstatica.h": definir
- os protótipos das funções
- o tipo de dado armazenado na fila
- o ponteiro "fila"
- tamanho do vetor usado na fila

"FilaEstatica.c": definir
- o tipo de dados "fila"
- implementar as suas funções

### Algumas informações básicas sobre a lista:
- Tamanho?
- Está cheia?
- Está vazia?

### Inserção

Em uma "fila" a inserção é sempre no seu final

Também existe o caso onde a inserção é feita
em uma "fila" que está vazia

Cuidado: não se pode inserir numa fila cheia

### Remoção

Em uma "fila"a remoção é sempre no seu início

Cuidado: não se pode remover de uma fila vazia

### Consulta

Em uma "fila" a consulta se dá apenas
ao elemento que está no seu início