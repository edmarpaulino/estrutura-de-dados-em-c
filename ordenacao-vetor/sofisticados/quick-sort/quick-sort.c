int particiona(int *V, int inicio, int final);

void quickSort(int *V, int inicio, int fim) {
    int pivo;
    if (fim > inicio) {
        pivo = particiona(V, inicio, fim);
        quickSort(V, inicio, pivo - 1);
        quickSort(V, pivo + 1, fim);
    }
}

int particiona(int *V, int inicio, int final) {
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = final;
    pivo = V[inicio];
    while (esq < dir) {
        while (V[esq] <= pivo) // avança posição da esquerda
            esq++;
        while (V[dir] > pivo) // recua posição da direita
            dir--;
        if (esq < dir) { // trocar esq e dir
            aux = V[esq];
            V[esq] = V[dir];
            V[dir] = aux;
        }
    }
    V[inicio] = V[dir];
    V[dir] = pivo;
    return dir;
}
