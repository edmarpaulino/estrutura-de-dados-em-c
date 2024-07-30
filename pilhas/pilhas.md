# Pilha

Uma estrutura do tipo "Pilha" é uma
sequência de elementos do mesmo tipo,
como as "Listas" e "Filas".
Seus elementos possuem estrutura interna
abstraída, ou seja, sua complexidade é
arbitrária e não afeta o seu funcionamento


```txt
Pilha   [33]
        [23]
        [16]
        [15]
        [43]
        [58]
```

## Uma "Pilha" é um tipo especial de "lista":
- inserções e exclusões de elementos
ocorrem apenas no início da "lista"

## Aplicações:
- análise de um expressão matemática
- avaliação de expressão pós-fixa
- converter uma expressão in-fixa para pós-fixa
- converter um número decimal para binário
- etc.

Em uma "Pilha" podemos realizar as
seguintes operações básicas:
- criação da pilha
- inserção de um elemento no "início"
- exclusão de um elemento do "início"
- acesso a um elemento do "início"
- destruição da pilha

Essas operações dependem do tipo de
alocação de memória usada
- estática
- dinâmica

## Alocação estática
- O espaço de memória é alocada no
momento da compilação
- Exige a definição do número máximo
de elementos da "Pilha"
- Acesso sequencial: elementos
consecutivos na memória

## Alocação dinâmica
- O espaço de memória é alocado
em tempo de execução
- A "Pilha" cresce à medida que
novos elementos são armazenados, e
diminui à medida que elementos são
removidos
- Acesso encadeado: cada elemento
pode estar em uma área distinta da
memória. Para acessar um
elemento, é preciso percorrer todos
os seus antecessores na "Pilha"