# Lista com nó descritor

"Lista Encadeada com Nó Descritor":
Trata-se de uma variação da
"Lista Dinâmica"
Pode ser usada em listas simples,
duplamente encadeada ou circular

Usa um "nó especial" chamado de
"descritor" para armazenar diversas
informações sobre a lista

```txt
Lista
     [início|final|qtd = 3] nó descritor   [dado]prox]
        |      |
        |       - - -
        |            |
        V            V
dados [33]]->[23]]->[16]]----
                            |
                            V
                           NULL
```

O "nó descritor" substitui o
ponteiro para ponteiro que indica
o início da lista

Ele permite armazenar informações como:
- ponteiro par ao inicio da lista;
- ponteiro para o final da lista;
- tamanho da lista;

Isso facilita certas operações


## Implementando um "Lista Dinâmica Nó Descritor"
"ListaDinEncadDesc.h": definir
- os protótipos das funções
- o tipo de dado armazenado na lista
- o ponteiro "lista"

"ListaDinEncadDesc.c": definir
- o tipo de dados "lista"
- o tipo de dados "descritor"
- implementar as suas funções


## Inserção
Existem 3 tipos de inserção numa
lista dinâmica. Com nosso "nó descritor"
temos uma vantagem:
- início: continua igual
- meio: continua igual
- final: não há necessidade de
percorrer a lista

Também existe o caso onde a inserção é feita
em uma "lista" que está vazia.

A inserção é parecida com a da
"Lista Dinâmica Encadeada". Deve-se apenas
considerar que agora temos dois ponteiros
para atualizar: inicio e final


## Remoção
Existem 3 tipos de remoção:
- início
- meio
- final

Os 3 tipos de remoção podem trabalhar juntos. A
remoção pode remover um elemento específico da
lista, o qual pode estar no início, no meio ou
no final da lista

Cuidado:
- não se pode remover de uma lista vazia
- removendo o último nó, a lista fica vazia
- temos dois ponteiros para atualizar:
inicio e final