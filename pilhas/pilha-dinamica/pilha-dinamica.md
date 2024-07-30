# Pilha Dinâmica

"Pilha Dinâmica":
Tipo de "Pilha" onde cada elemento
aponta para o seu sucessor na "pilha"
Usa um ponteiro especial
(ponteiro para ponteiro) para o
primeiro elemento da "pilha" e uma
indicação de final de "pilha" (NULL)

```txt
Pilha *pi;

  ------[topo]    [dado]prox]
  |
  ----> [16]]--
              |
          -----
          |
          V    
        [15]]--
              |
          -----
          |
          V 
        [43]]--
              |
          -----
          |
          V 
        [NULL]
```

## Implementando uma "Pilha Dinâmica"
"PilhaDin.h": definir
- os protótipos das funções
- o tipo de dado armazenado na pilha
- o ponteiro "pilha"

"PilhaDin.c": definir
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