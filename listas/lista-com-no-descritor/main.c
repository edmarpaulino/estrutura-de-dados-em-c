#include <string.h>
#include "ListaDinEncadDesc.h"

int main(void) {
    Lista *li; // ponteiro para nó descritor
    struct aluno dados_aluno;

    dados_aluno.matricula = 1;
    strcpy(dados_aluno.nome, "Foo Bar");
    dados_aluno.n1 = 7.0;
    dados_aluno.n2 = 8.0;
    dados_aluno.n3 = 5.0;

    li = cria_lista();

    int tl = tamanho_lista(li);

    int ili = insere_lista_inicio(li, dados_aluno);
    int ilf = insere_lista_final(li, dados_aluno);
    
    int rli = remove_lista_inicio(li);
    int rlf = remove_lista_final(li);

    libera_lista(li);

    return 0;
}
