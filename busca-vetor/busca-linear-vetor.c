int buscaLinear(int *V, int N, int elem) {
  int i;
  for(i = 0; i < N; i++) { 
    if (elem == V[i])
     return i; // elemento encontrado
  }
  return -1; // elemento não encontrado
}
