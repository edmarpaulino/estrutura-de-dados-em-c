#include <stdio.h>
#include <string.h>

struct aluno {
    int matricula;
    char nome[30];
    float n1, n2, n3;
};

void insertionSortMatricula(struct aluno *V, int N) {
    int i, j;
    struct aluno aux;
    for (i = 1; i < N; i++){
        aux = V[i];
        for (j = i; (j > 0) && (aux.matricula < V[j - 1].matricula); j--)
            V[j] = V[j - 1];
        V[j] = aux;
    }
}

/* saida strcmp(str1, str2)
 * == 0: str1 é igual a str2
 * > 0: str1 vem depois de str2
 * < 0: str1 vem antes de str2
 * */
void insertionSortNome(struct aluno *V, int N) {
    int i, j;
    struct aluno aux;
    for (i = 1; i < N; i++) {
        aux = V[i];
        for (j = i; (j > 0) && (strcmp(aux.nome, V[j - 1].nome) < 0); j--)
            V[j] = V[j - 1];
        V[j] = aux;
    }
}

int main() {
    int i;

    struct aluno V[4] = {
        { 2, "Andre", 9.5, 7.8, 8.5 },
        { 4, "Ricardo", 7.5, 8.6, 6.8 },
        { 1, "Bianca", 9.7, 6.7, 8.4 },
        { 3, "Ana", 5.7, 6.1, 7.4 }
    };

    // insertionSortMatricula(V, 4);
    insertionSortNome(V, 4);
    for (i = 0; i < 4; i++)
        printf("%d) %s\n", V[i].matricula, V[i].nome);

    return 0;
}
