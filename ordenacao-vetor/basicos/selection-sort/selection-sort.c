void selectionSort(int *V, int N) {
    int i, j, menor, troca;
    for (i = 0; i < N - 1; i++) {
        menor = i;
        for (j = i + 1; j < N; j++) { // Procura o menor elemento em relação a "i"
            if (V[j] < V[menor])
                menor = j;
        }
        if (i != menor) { // Troca os valores da posição atual com a "menor"
            troca = V[i];
            V[i] = V[menor];
            V[menor] = troca;
        }
    }
}
