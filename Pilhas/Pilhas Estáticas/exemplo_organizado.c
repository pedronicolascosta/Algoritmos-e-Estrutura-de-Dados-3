#include <stdio.h>
#define MAX 50

typedef struct {
    int topo;
    int dados[MAX];
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
    int i;
    for(i=0; i<MAX; i++){
    	p->dados[i] = NULL;
	}
}

int adicionarProntuario(Pilha *p, int valor) {
    if (p->topo == MAX - 1) {
        return 0; // Pilha cheia
    }
    p->dados[++p->topo] = valor;
    return 1;
}

int removerProntuario(Pilha *p) {
    if (p->topo == -1) {
        return 0; // Pilha vazia
    }

	p->dados[p->topo] = NULL;
    p->dados[p->topo--];
    return 1;
}

void listarProntuarios(Pilha *p){
    int i;
    for (i = 0; i < MAX; i++){
        printf("%i\n", p->dados[i]);
    }
}

int main() {
	printf("---Inicializando pilha...---\n");
    Pilha p;
    inicializar(&p);
    printf("---Pilha inicializada!---\n\n");
    
    printf("---Listando a pilha...---\n");
    listarProntuarios(&p);
    printf("---Pilha listada!---\n\n");
    
    printf("---Adicionando '10' na pilha...---\n");
    adicionarProntuario(&p, 10);
    printf("---'10' adicionado na pilha!---\n\n");
    
    printf("---Listando a pilha...---\n");
    listarProntuarios(&p);
    printf("---Pilha listada!---\n\n");
    
    printf("---Adicionando '20' na pilha...---\n");
    adicionarProntuario(&p, 20);
    printf("---'20' adicionado na pilha!---\n\n");
    
    printf("---Listando a pilha...---\n");
    listarProntuarios(&p);
    printf("---Pilha listada!---\n\n");
    
    printf("---Removendo o topo da pilha...---\n");
	removerProntuario(&p);
	printf("---Topo removido!...---\n\n");
	
	printf("---Listando a pilha...---\n");
    listarProntuarios(&p);
    printf("---Pilha listada!---\n\n");
   
    return 0;
}
