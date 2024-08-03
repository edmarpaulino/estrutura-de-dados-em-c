#include <stdio.h>
#include <stdlib.h>

int comparaCrescente(const void *a, const void *b) {
    if (*(int*)a == *(int*)b)
        return 0; // iguais
    else
        if (*(int*)a < *(int*)b)
            return -1; // vem antes
        else
            return 1; // vem depois
}

int comparaDecrescente(const void *a, const void *b) {
    if (*(int*)a == *(int*)b)
        return 0; // iguais
    else
        if (*(int*)a < *(int*)b)
            return 1; // vem depois 
        else
            return -1; // vem antes
}

int main() {
    int i, vet[10] = {23, 4, 67, -8, 54, 90, 21, 14, -5, 1};

    qsort(vet, 10, sizeof(int), comparaCrescente);
    printf("ASC:\n");
    for (i = 0; i < 10; i++)
        printf("Number = %d\n", vet[i]);

    printf("-----------\n");

    qsort(vet, 10, sizeof(int), comparaDecrescente);
    printf("DESC:\n");
    for (i = 0; i < 10; i++)
        printf("Number = %d\n", vet[i]);

    return 0;
}
