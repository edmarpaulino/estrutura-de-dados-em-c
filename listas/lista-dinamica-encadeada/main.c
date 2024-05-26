#include <string.h>
#include "ListaDinEncad.h"

int main(void) {
    Lista *li; // ponteiro para ponteiro
    struct aluno dados_aluno;

    dados_aluno.matricula = 1;
    strcpy(dados_aluno.nome, "Foo Bar");
    dados_aluno.n1 = 7.0;
    dados_aluno.n2 = 8.0;
    dados_aluno.n3 = 5.0;

    li = cria_lista();

    int tl = tamanho_lista(li);
    int lc = lista_cheia(li);
    int lv = lista_vazia(li);

    int ili = insere_lista_inicio(li, dados_aluno);
    int ilf = insere_lista_final(li, dados_aluno);
    int ilo = insere_lista_ordenada(li, dados_aluno);

    int rli = remove_lista_inicio(li);
    int rlf = remove_lista_final(li);
    int matricula_aluno = dados_aluno.matricula;
    int rl = remove_lista(li, matricula_aluno);

    int posicao = 1; // as posições na lista começam a partir de 1 e não 0 nesta implementação
    int clp = consulta_lista_pos(li, posicao, &dados_aluno);
    int clm = consulta_lista_mat(li, matricula_aluno, &dados_aluno);

    libera_lista(li);

    return 0;
}
