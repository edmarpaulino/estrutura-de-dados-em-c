void criaHeap(int *vet, int i, int f);

void heapSort(int *vet, int N) {
    int i, aux;
    for (i = (N - 1) / 2; i >= 0; i--) { // criar heap a partir dos dados e colocar maior elemento no topo
        criaHeap(vet, i, N - 1);
    }
    for (i = N - 1; i >= 1; i--) { // pegar o maior elemento da heap e colocar na sua posição cor5respondente no array
        aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;
        criaHeap(vet, 0, i - 1); // reconstruir heap
    }
}

void criaHeap(int *vet, int i, int f) {
    int aux = vet[i];
    int j = i * 2 + 1;
    while (j <= f) {
        if (j < f) {
            if (vet[j] < vet[j + 1]) { // Pai tem 2 filhos? Quem é o maior?
                j = j + 1;
            }
        }
        if (aux < vet[j]) { // Filho maior que o Pai? Filho se torna o Pai! Repetir o processo
            vet[i] = vet[j];
            i = j;
            j = 2 * i + 1;
        } else {
            j = f + 1;
        }
    }
    vet[i] = aux; // antigo Pai ocupa lugar do último Filho analisado
}
