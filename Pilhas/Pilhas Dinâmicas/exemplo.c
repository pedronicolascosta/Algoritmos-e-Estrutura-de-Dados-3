//Exemplo de Estrutura de Pilha
//Autor: Pedro Nicolas Costa

#include <stdio.h>
#include <locale.h>
#include <malloc.h>
#include <stdbool.h>

typedef int TIPOCHAVE;

typedef struct{
	TIPOCHAVE chave;
	// outros campos...
} REGISTRO;

typedef struct aux{
	REGISTRO reg;
	struct aux* prox;
} ELEMENTO;

typedef ELEMENTO* PONT;

typedef struct{
	PONT topo;
} PILHA;

void iniciarPilha(PILHA* p){
	p->topo = NULL;
}

int tamanho(PILHA* p){
	PONT end = p->topo;
	int tam = 0;
	while(end != NULL){
		tam++;
		end = end->prox;
	}
	return tam;
}

bool estaVazia(PILHA* p){
	if(p->topo == NULL){
		return true;
	}
	return false;
}

bool imprimirPilha(PILHA* p){
	PONT end = p-> topo;
	printf("Pilha: ");
	while(end != NULL){
		printf("%i ", end->reg.chave);
		end = end->prox;
	}
	printf("\n");
	return true;
}

bool inserirPilha(PILHA* p, REGISTRO reg){
	PONT novo = (PONT) malloc(sizeof(ELEMENTO));
	novo->reg = reg;
	novo->prox = p->topo;
	p->topo = novo;
	return true;
}

bool removerPilha(PILHA* p, REGISTRO* reg){
	if(p->topo == NULL){
		return false;
	}	
	*reg = p->topo->reg;
	PONT apagar = p->topo;
	p->topo = p->topo->prox;
	free(apagar);
	return true;
}

void reinicializarPilha(PILHA* p){
	PONT apagar;
	PONT posicao = p->topo;
	while (posicao != NULL){
		apagar = posicao;
		posicao = posicao->prox;
		free(apagar);
	}
	p->topo = NULL;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("Este código se refere a exemplificação de uma estrutura de Pilha");
	
	// Inicializando a pilha
    PILHA p;
    iniciarPilha(&p);
    
    printf("Pilha inicializada.\n");

    // Inserindo elementos na pilha
    REGISTRO r1 = {10};
    REGISTRO r2 = {20};
    REGISTRO r3 = {30};
    
    inserirPilha(&p, r1);
    inserirPilha(&p, r2);
    inserirPilha(&p, r3);
    
    // Imprimindo a pilha
    imprimirPilha(&p);
    
    // Removendo um elemento da pilha
    REGISTRO removido;
    if(removerPilha(&p, &removido)){
        printf("Elemento removido: %i\n", removido.chave);
    } else {
        printf("Pilha vazia, não há elementos para remover.\n");
    }
    
    // Imprimindo a pilha após a remoção
    imprimirPilha(&p);

    // Reinicializando a pilha (esvaziando)
    reinicializarPilha(&p);
    printf("Pilha reinicializada.\n");

    // Verificando se a pilha está vazia
    if(estaVazia(&p)){
        printf("Pilha está vazia.\n");
    }

    return 0;
}
