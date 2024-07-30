#include <stdio.h>
#include <string.h>
#include "PilhaEstatica.h"

int main(void) {
    Pilha *pi;
    struct aluno dados_aluno;

    dados_aluno.matricula = 1;
    strcpy(dados_aluno.nome, "Foo Bar");
    dados_aluno.n1 = 7.0;
    dados_aluno.n2 = 8.0;
    dados_aluno.n3 = 5.0;

    pi = cria_pilha();

    int tp = tamanho_pilha(pi);
    int pc = pilha_cheia(pi);
    int pv = pilha_vazia(pi);

    int ip = insere_pilha(pi, dados_aluno);
    int rp = remove_pilha(pi);
    int ctp = consulta_topo_pilha(pi, &dados_aluno);

    libera_pilha(pi);
    return 0;
}
