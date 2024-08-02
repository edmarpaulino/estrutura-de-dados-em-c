#include <string.h>
#include <stdio.h>

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

int buscaLinearMatricula(struct aluno *V, int N, int elem) {
    int i;
    for (i = 0; i < N; i++){
        if (elem == V[i].matricula)
            return i; // elemento encontrado
    }
    return -1; // elemento não encontrado
}

int buscaLinearNome(struct aluno *V, int N, char *elem) {
    int i;
    for (i = 0; i < N; i++) {
        if (strcmp(elem, V[i].nome) == 0)
            return i; // elemento encontrado
    }
    return -1; // elemento não encontrado
}

int main() {
    struct aluno V[4] = {
        { 2, "Andre", 9.5, 7.8, 8.5 },
        { 4, "Ricardo", 7.5, 8.7, 6.8 },
        { 1, "Bianca", 9.7, 6.7, 8.4 },
        { 3, "Ana", 5.7, 6.1, 7.4 },
    };

    if (buscaLinearNome(V, 4, "Andre") != -1)
        printf("OK\n");
    else
        printf("ERRO\n");

    return 0;
}
