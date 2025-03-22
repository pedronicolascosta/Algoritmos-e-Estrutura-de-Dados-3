#include <stdio.h>
#define MAX 10

typedef struct {
    int topo;
    int dados[MAX];
} Pilha;

void inicializar(Pilha *p) {
    p->topo = -1;
}

int empilhar(Pilha *p, int valor) {
    if (p->topo == MAX - 1) {
        return 0; // Pilha cheia
    }
    p->dados[++p->topo] = valor;
    return 1;
}

int desempilhar(Pilha *p, int *valor) {
    if (p->topo == -1) {
        return 0; // Pilha vazia
    }

    *valor = p->dados[p->topo--];
    return 1;
}

void listarPilha(Pilha *p){
    printf("RESULTADO APOS DESEMPILHAMENTO\n");
    int i;
    for (i = 0; i < MAX; i++){
        printf("%i\n", p->dados[i]);
    }
}

int main() {
    Pilha p;
    inicializar(&p);
    printf("EMPILHANDO\n");
    empilhar(&p, 10);
    empilhar(&p, 20);
    printf("DESEMPILHANDO\n");
    int item;
    while (desempilhar(&p, &item)) {
        printf("%d\n", item);
    }
    listarPilha(&p);
   
    return 0;
}
