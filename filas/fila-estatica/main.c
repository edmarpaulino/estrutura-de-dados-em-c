#include <stdio.h>
#include <string.h>
#include "FilaEstatica.h"

int main(void) {
    Fila *fi;
    struct aluno dados_aluno;

    dados_aluno.matricula = 1;
    strcpy(dados_aluno.nome, "Foo Bar");
    dados_aluno.n1 = 7.0;
    dados_aluno.n2 = 8.0;
    dados_aluno.n3 = 5.0;

    fi = cria_fila();

    int tf = tamanho_fila(fi);
    int fc = fila_cheia(fi);
    int fv = fila_vazia(fi);

    int ifi = insere_fila(fi, dados_aluno);
    int rf = remove_fila(fi);

    int cf = consulta_fila(fi, &dados_aluno);

    libera_fila(fi);

    return 0;
}
