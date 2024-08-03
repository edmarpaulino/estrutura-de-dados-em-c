# Quicksort
- Algoritmo rápido de ordenação
- Complexidade "N log N"
- Implementado na biblioteca "stdlib.h"

## Protótipo
```c
void qsort(void *base, size_t num, size_t size, int (*compar)(const void*, const void*));
```

- base: endereço do array a ser ordenado
- num: tamanho do array
- size: tamanho, em bytes, de cada posição do array
- compar: ponteiro para a função de comparação
- size_t: é apenas um inteiro sem sinal

### Função de comparação
- função que define como dois valores
("p1" e "p2") do array serão comparados
- Deve seguir o seguinte protótipo
```c
int compar(const void *p1, const void *p2);
```

### Retorno da função
- valor "menor do que" 0: p1 vem "antes" de p2
- valor "igual a" 0: p1 é "igual" a p2
- valor "maior do que" 0: p1 vem "depois" de p2
