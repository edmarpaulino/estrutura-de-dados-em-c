# Lista Dinâmica Encadeada

"Lista Dinâmica Encadeada":
Tipo de "Lista" onde cada elemento
aponta para o seu sucessor na "lista"
Usa um ponteiro especial para o
primeiro elemento da lista e uma
indicação de final de lista


```txt
Lista
      início            [dado]prox]
        |
        |
        V
dados [33]]->[23]]->[16]]----
                            |
                            V
                           NULL
```

- Cada elemento é tratado como um
ponteiro que é alocado dinâmicamente,
a medida que os dados são inseridos.
- Para guardar o primeiro elemento,
utilizamos um "ponteiro para ponteiro"
- Um "ponteiro para ponteiro" pode
guardar o endereço de um "ponteiro".
- Assim, fica fácil mudar quem está no
início da lista mudando o "conteúdo"
do "ponteiro para ponteiro".


## Vantagens
- Melhor utilização dos recursos
de memória
- não precisa movimentar os elementos
nas operações de inserção e remoção


## Desvantagens:
- Acesso indireto aos elementos
- Necessidade de percorrer a lista
para acessar um elemento


## Quando utilizar essa "Lista"? 
- Não há necessidade de garantir um
espaço mínimo para a execução do
aplicativo
- Inserção/remoção em lista ordenada
são as operações mais frequentes


## Implementando uma "Lista Dinâmica Encadeada"
"ListaDinEncad.h": definir
- os protótipos das funções
- o tipo de dado armazenado na lista
- o ponteiro "lista"

"ListaDinEncad.c": definir
- o tipo de dados "lista"
- implementar as suas funções


## Algumas informações básicas sobre a lista:
- Tamanho?
- Está cheia?
- Está vazia?


## Existem 3 tipos de inserção:
- início
- meio
- final

Também existe o caso onde a inserção é feita
emu uma "lista" que está vazia.


## Existem 3 tipos de remoção:
- início
- meio
- final

Os 3 tipos de remoção trabalham juntos. A
remoção sempre remove um elemento específico da
lista, o qual pode estar no início, no meio ou
no fianl da lista

Cuidado:
- não se pode remover de uma lista vazia
- removendo o último nó, a lista fica vazia


## Existem 2 maneiras de consultar um elemento de uma lista:
- pela posição
- pelo conteúdo

Ambos depende de busca (percorrer os elementos)
até encontrar o desejado