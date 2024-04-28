# Lista

Uma estrutura do tipo "Lista" é uma
sequência de elementos do mesmo tipo.
Seus elementos possuem estrutura interna
abstraída, ou seja, sua complexidade é
arbitrária e não afeta o seu funcionamento

**Lista** \[33\]\[23\]\[16\]\[15\]\[43\]\[58\]

Uma "Lista" pode possuir N (N >= 0)
elementos.
Se N = 0, dizemos que a "Lista" está
vazia

Aplicações:
- Cadastro de funcionários
- Itens em estoque
- Cartas de baralho
- etc

Em uma "Lista" podemos realizar as
sequintes operações básicas:
- criação da lista
- inserção da lista
- exclusão de um elemento
- acesso a um elemento
- destruição da lista
- etc

Essas operações dependem do tipo de
alocação de memória usada
- estática
- dinâmica

## Alocação estática
- O espaço de memória é alocada no
momento da compilação
- Exige a definição do número máximo
de elementos da "Lista"
- Acesso sequencial: elementos
consecutivos na memória

```txt
Lista (Vetor)

qtd [3] ------------
                   |
                   V
dados [33][23][16][  ][  ][  ]
      0                    MAX - 1
```

## Alocação dinâmica:
- O espaço de memória é alocado em tempo
de execução
- A "Lista" cresce á medida que novos
elementos são armazenados, e diminui à
medida que elementos são removidos
- Acesso encadeado: cada elemento pode estar
em uma área distinta da memória. Para acessar
um elemento, é preciso percorrer todos os
seus antecessores na "Lista"

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
