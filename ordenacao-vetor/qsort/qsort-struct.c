
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

int comparaMatricula(const void *a, const  void *b) {
    if ((*(struct aluno*)a).matricula == (*(struct aluno*)b).matricula)
        return 0; // iguais
    else
        if ((*(struct aluno*)a).matricula < (*(struct aluno*)b).matricula)
            return -1; // vem antes
        else
            return 1; // vem depois
}

int comparaNome(const void *a, const void *b) {
    int r = strcmp((*(struct aluno*)a).nome, (*(struct aluno*)b).nome);

    if (r == 0)
        return 0; // iguais
    else
        if (r < 0)
            return -1; // vem antes
        else
            return 1; // vem depois
}

int main() {
    int i;
    struct aluno V[4] = {
        { 2, "Andre", 9.5, 7.8, 8.5 },
        { 4, "Ricardo", 7.5, 8.6, 6.8 },
        { 1, "Bianca", 9.7, 6.7, 8.4 },
        { 3, "Ana", 5.7, 6.1, 7.4 }
    };

    qsort(V, 4, sizeof(struct aluno), comparaMatricula);
    printf("Por matricula:\n");
    for (i = 0; i < 4; i++)
        printf("%d) %s\n", V[i].matricula, V[i].nome);

    printf("-----------\n");

    qsort(V, 4, sizeof(struct aluno), comparaNome);
    printf("Por nome:\n");
    for (i = 0; i < 4; i++)
        printf("%d) %s\n", V[i].matricula, V[i].nome);

    return 0;
}
