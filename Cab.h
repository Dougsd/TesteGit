#ifndef CAB_H_INCLUDED
#define CAB_H_INCLUDED
#define N 30
//kkkkkkkk
struct Lista{
	int chave;
	char nome[N];
	struct Lista* prox;
};
typedef struct Lista pessoa;
struct Fila{
	pessoa* ini;
	pessoa* fim;
	int nItens;
};
typedef struct Fila fila;
fila* f_criar();
void f_insere(fila* f, int c,char nome[]);
void f_imprime(fila*f);
void f_retira(fila* f,int chave);
void f_libera(fila* f);
int qtdItens(fila*f);
int vazia(fila*f);
void priAluno(fila*f);
void ultAluno(fila*f);
void f_ordena(fila*f);
void f_busca(fila* f, int chave);
#endif // CAB_H_INCLUDED