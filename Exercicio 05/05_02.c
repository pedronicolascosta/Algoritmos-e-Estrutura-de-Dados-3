//Exerc�cio 05_02
//Pilhas Din�micas e Est�ticas
//Autor: Pedro Nicolas Costa

//Exerc�cio 2: Pilha Est�tica - Controle de Prontu�rios M�dicos
//Em um hospital, os prontu�rios m�dicos dos pacientes em atendimento s�o organizados em uma pilha est�tica. Quando um paciente chega, seu prontu�rio � adicionado ao topo da pilha. Quando um m�dico finaliza o atendimento, o prontu�rio do paciente mais recente � removido da pilha.
//Tarefa:
//Implemente um programa em C que utilize uma pilha est�tica para gerenciar os prontu�rios. O programa deve permitir:
//-> Adicionar um prontu�rio (empilhar).
//-> Remover o prontu�rio do paciente atendido (desempilhar).
//-> Exibir a lista de prontu�rios pendentes.
//A pilha deve ser implementada usando um vetor fixo com capacidade para armazenar at� 50 prontu�rios.

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
    	printf("\nAlerta: A pilha atingiu o limite de 50 prontu�rios.\n");
        return 0;
    }
    p->dados[++p->topo] = valor;
    return 1;
}

int removerProntuario(Pilha *p) {
    if (p->topo == -1) {
    	printf("\nAlerta: A pilha est� vazia.\n");
        return 0; // Pilha vazia
    }

	p->dados[p->topo] = NULL;
    p->dados[p->topo--];
    return 1;
}

int consultarProntuario(Pilha *p){
	printf("%i\n", p->dados[p->topo]);
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
    
    printf("---Consultando o topo da pilha...---\n");
    consultarProntuario(&p);
    printf("---Topo consultado!---\n\n");
    
    printf("---Removendo o topo da pilha...---\n");
	removerProntuario(&p);
	printf("---Topo removido!...---\n\n");
	
	printf("---Listando a pilha...---\n");
    listarProntuarios(&p);
    printf("---Pilha listada!---\n\n");
   
    return 0;
}

