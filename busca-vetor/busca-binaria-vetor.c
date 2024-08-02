#include <stdio.h>

int buscaBinaria(int *V, int N, int elem) {
    int i, inicio, meio, final;
    inicio = 0;
    final = N - 1;
    while (inicio <= final) {
        meio = (inicio + final) / 2;
        if (elem < V[meio])
            final = meio - 1; // busca na metade esquerda
        else
            if (elem > V[meio])
                inicio = meio + 1; // busca na metade direita
            else
                return meio;
    }
    return -1; // elemento não encontrado
}

int main() {
    int vet[10] = { -8, -5, 1, 4, 14, 21, 23, 54, 67, 90 };

    if (buscaBinaria(vet, 10, 14) != -1)
        printf("OK\n");
    else
        printf("ERRO\n");
    
    return 0;
}
