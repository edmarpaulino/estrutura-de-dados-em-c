# Fila

Uma estrutura do tipo "Fila" é uma
sequência de elementos do mesmo tipo,
como as "Listas".
Seus elementos possuem estrutura interna
abstraída, ou seja, sua complexidade é
arbitrária e não afeta o seu funcionamento

```txt
Fila
Início [33] [23] [16] [15] [43] [58] final

            Sentido da fila
<------------------------------------------
```

Uma "Fila" é um tipo especial de "lista":
- inserções e exclusões de elementos
ocorrem nas extremidades da "lista"

Aplicações: qualquer aplicação onde
- Controle de fluxo
- Recursos compartilhados (impressora,
transações de banco de dados, etc)
- etc

Em uma "Fila" podemos realizar as
seguintes operações básicas:
- criação da fila
- inserção de um elemento no "final"
- remoção de um elemento no "início"
- acesso ao elemento do "início"
- destruição da fila

Essas operações dependem do tipo de
alocação de memória usada
- estática
- dinâmica

## Alocação estática
- O espaço de memória é alocada no
momento da compilação
- Exige a definição do número máximo
de elementos da "Fila"
- Acesso sequencial: elementos
consecutivos na memória

## Alocação dinâmica:
- O espaço de memória é alocado
em tempo de execução.
- A "Fila" cresce à medida que
novos elementos são armazenados, e
diminui à medida que elementos são
removidos
- Acesso encadeado: cada elemento
pode estar em uma área distinta da
memória. Para acessar um elemento,
é preciso percorrer todos os seus
antecessores na "Fila".