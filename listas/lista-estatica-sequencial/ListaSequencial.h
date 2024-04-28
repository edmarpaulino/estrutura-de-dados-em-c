#define MAX 100

struct aluno {
	int matricula;
	char nome[30];
	float n1, n2, n3;
};

typedef struct lista Lista;

Lista *cria_lista();
void libera_lista(Lista *li);

int tamanho_lista(Lista *li);
int lista_cheia(Lista *li);
int lista_vazia(Lista *li);

int insere_lista_final(li, dados_aluno);
int insere_lista_inicio(li, dados_aluno);
int insere_lista_ordenada(li, dados_aluno);

int remove_lista_final(Lista *li);
int remove_lista_inicio(Lista *li);
int remove_lista(Lista *li, int mat);

int consulta_lista_pos(Lista *li, int pos, struct aluno *al);
int consulta_lista_mat(Lista *li, int mat, struct aluno *mat);
