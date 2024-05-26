# TAD - Tipo Abstrato de Dado

Tipo de dado: define o conjunto de valores (domínio)
que uma variável pode assumir

Ex: int
... -2, -1, 0, +1, +2, ...

Estruturas de Dados: trata-se de um relacionamento lógico entre
tipos de dados

Tipos Abstratos de Dados ou "TAD":
incluem as operações para a
manipulação dos dados
Ex:
- criação da estrutura
- inclusão de um elemento
- remoção de um elemento
- acesso a um elemento
- etc

Vantagens:
- Encapsulamento e Segurança: usuário não
  tem acesso direto aos dados

- Flexibilidade e Reutilização: podemos
  alterar o "TAD" sem alterar as aplicações
  que o utilizam

Exemplo de TAD: arquivos em C
```c
    FILE* f;
```

Os dados de "f" somente podem ser acessados
pelas funções de manipulação do tipo:
- fopen()
- fclose()
- fputc()
- fgetc()
- feof()
- ...


A convenção em linguagem C é preparar
dois arquivos para implementar um "TAD"

Arquivo ".H": protótipos das funções, tipos
de ponteiro, e dados globalmente acessíveis

Arquivo ".C": declaração do tipo de dados e
implementação das suas funções.

Assim separamos o "conceito" (definição do tipo) de sua "implementação"

Exemplo de "TAD": um ponto definido
por suas coordenadas "x" e "y"

```c
    struct ponto {
        float x;
        float y;
    };
```

1o passo: definir o arquivo ".H"
- protótipos das funções
- tipos de ponteiro
- dados globalmente acessíveis

```c
// Arquivo Ponto.h
typedef struct ponto Ponto;

// Cria um novo ponto
Ponto* pto_cria(float x, float y);

// Libera um ponto
void pto_libera(Ponto* p);

// Acessa os valores "x" e "y" de um ponto
void pto_acessa(Ponto* p, float* x, float* y);

// Atribui os valores "x" e "y" a um ponto
void pto_atribui(Ponto* p, float x, float y);

// Calcula a distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2);

```

```c
#include <stdlib.h>
#include <math.h>
#include "Ponto.h" // inclui os Protótipos

// Definição do tipo de dados
struct ponto {
    float x;
    float y;
};

// Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* pto_cria(float x, float y) {
    Ponto* p = (Ponto*) malloc(sizeof(Ponto));
    if (p != NULL) {
        p->x = x;
        p->y = y;
    }
    return p;
}

// Libera a memória alocada para um ponto
void pto_libera(Ponto* p) {
    free(p);
}

// Recupera, por referência, o valor de um ponto
void pto_acessa(Ponto* p, float* x, float* y) {
    *x = p->x;
    *y = p->y;
}

// Atribui a um ponto as coordenadas "x" e "y"
void pto_atribui(Ponto* p, float x, float y) {
    p->x = x;
    p->y = y;
}

// Calcula a distância entre dois pontos
float pto_distancia(Ponto* p1, Ponto* p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}

```

```c
// Arquivo main.c
#include <stdio.h>
#include <stdlib.h>
#inlcude <Ponto.h>

int main() {
    float d;
    Ponto *p, *q;
    // Ponto r; // ERRO
    p = pto_cria(10, 21);
    q = pto_cria(7, 25);
    // q->x = 2; // ERRO
    d = pto_distancia(p, q);
    printf("Distancia entre pontos: %f\n", d);
    pto_libera(q);
    pto_libera(p);

    return 0;
}

```
