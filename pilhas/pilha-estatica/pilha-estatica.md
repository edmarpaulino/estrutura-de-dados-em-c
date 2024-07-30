# Pilha Estática

"Pilha Estática":
Tipo de "Pilha" onde o sucessor
de um elemento ocupa a posição
física seguinte do mesmo
(uso de "array")

```txt
Pilha *pi;

  ------[ 3] qtd
  |
  |     [  ] MAX - 1
  ----> [  ]
        [16]
        [15]
        [43] 0
```

## Implementando uma "Pilha Estática"
"PilhaEstatica.h": definir
- os protótipos das funções
- o tipo de dado armazenado na pilha
- o ponteiro "pilha"
- tamanho do vetor usado na pilha

"PilhaEstatica.c": definir
- o tipo de dados "pilha"
- implementar as suas funções

### Algumas informações básicas sobre a pilha:
- Tamanho?
- Está cheia?
- Está vazia?

### Inserção

Em uma "pilha" a inserção é sempre no seu início

Também existe o caso onde a inserção é feita
em uma "pilha" que está vazia

Cuidado: não se pode inserir em uma pilha cheia

### Remoção

Em uma "pilha" a remoção é sempre no seu início

Cuidado: não se pode remover de uma pilha vazia

### Consulta

Em uma "pilha" a consulta se dá apenas
ao elemento que está no seu início