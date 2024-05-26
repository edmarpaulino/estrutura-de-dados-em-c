#include <stdio.h>
#include <string.h>
#include "ListaSequencial.h"

int main(void) {
    Lista *li;
    struct aluno dados_aluno;

    dados_aluno.matricula = 1;
    strcpy(dados_aluno.nome, "Foo Bar");
    dados_aluno.n1 = 7.0;
    dados_aluno.n2 = 8.0;
    dados_aluno.n3 = 5.0;

    li = cria_lista();

    int tl = tamanho_lista(li);
    printf("Tamanho da lista: %d\n", tl);

    int lc = lista_cheia(li);
    printf("Lista cheia: %s\n", lc ? "TRUE" : "FALSE");

    int lv = lista_vazia(li);
    printf("Lista vazia: %s\n", lv ? "TRUE" : "FALSE");

    int ilf = insere_lista_final(li, dados_aluno);
    printf("Inseriu no final da lista: %s\n", ilf ? "TRUE" : "FALSE");

    int ili = insere_lista_inicio(li, dados_aluno);
    printf("Inseriu no início da lista: %s\n", ili ? "TRUE" : "FALSE");

    int rlf = remove_lista_final(li);
    printf("Removeu no final da lista: %s\n", rlf ? "TRUE" : "FALSE");

    int rli = remove_lista_inicio(li);
    printf("Removeu no início da lista: %s\n", rli ? "TRUE" : "FALSE");

    int rl = remove_lista(li, 1);
    printf("Removeu da lista: %s\n", rl ? "TRUE" : "FALSE");

    int posicao = 1;
    int clp = consulta_lista_pos(li, posicao, &dados_aluno);
    printf("Consultou pela posição na lista: %s\n", clp ? "TRUE" : "FALSE");

    int matricula = 1;
    int clm = consulta_lista_mat(li, matricula, &dados_aluno);
    printf("Consultou pela matricula na lista: %s\n", clp ? "TRUE" : "FALSE");

    libera_lista(li);

    return 0;
}
