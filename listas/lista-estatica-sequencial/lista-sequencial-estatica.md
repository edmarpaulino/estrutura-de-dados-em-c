# Lista Sequencial Estática

"Lista Sequencial Estática" ou
"Lista Linear Estática":
Tipo de "Lista" onde o sucessor
de um elemento ocupa a posição
física seguinte do mesmo
(uso de "array")

```txt
Lista

qtd [3] ------------
                   | 
                   V
dados [33][23][16][  ][  ][  ]
       0                   MAX - 1
```

## Vantagens do uso de arrays:
- Acesso rápido e direto aos
elementos (índice)
- Tempo constante para acessar um
elemento
- Facilidade em modificar informações

## Desvantagens do uso de arrays:
- Definição prévia do tamanho do
array
- Dificuldade para inserir e remover
um elemento entre outros dois: é
necessário deslocar os elementos

```txt
inserir
dados [33][23][16][  ][  ][  ]
       0      \  \         MAX - 1
dados [33][12][23][16][  ][  ]
       0                   MAX - 1

remover
dados [33][12][23][16][  ][  ]
       0      /   /        MAX - 1
dados [33][23][16][  ][  ][  ]
       0                   MAX - 1
```

## Quando utilizar essa "Lista"?
- Listas pequenas
- Inserção/remoção apenas no final
da lista
- Tamanho máximo bem definido
- A busca é a operação mais frequente

## Implementando uma "Lista Sequencial Estática"

"ListaSequencial.h": definir
- os protótipos das funções
- o tipo de dado armazenado na lista
- o ponteiro "lista"
- tamanho do vetor usado na lista

"ListaSequencial.c": definir
- o tipo de dados "lista"
- implementar as suas funções

### Algumas informações básicas sobre a lista:
- Tamanho?
- Está cheia?
- Está vazia?

### Existem 3 tipos de inserção:
- início
- meio
- final

Também existe o caso onde a inserção é feita
em uma "lista" que está vazia.
Cuidado: não se pode inserir numa lista cheia.

### Existem 3 tipos de remoção:
- início
- meio
- final

Os 3 tipos de remoção trabalham juntos. A
remoção sempre remove um elemento específico da
lista, o qual pode estar no início, no meio ou
no final da lista
Cuidado: não se pode remover de uma lista vazia

### Existem 2 maneiras de consultar um elemento de uma lista:
- pela posição (acesso direto)
- pelo conteúdo (necessidade de busca)
