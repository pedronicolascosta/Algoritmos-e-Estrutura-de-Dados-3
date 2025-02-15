//autor: Pedro Nicolas Costa
//exercicio 04

#include <stdio.h>
#include <locale.h>

int somarArray(int tamanho, int vetor[]){
	int i, soma=0;
	for(i=0; i<tamanho; i++){
		soma += vetor[i];
	}
	return soma;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tamanho, i, resultado;
	
	printf("---Exercício 04---\n");
	
	printf("Insira o tamanho do array... ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	for(i=0; i<tamanho; i++){
		printf("Digite o %dº valor... ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	resultado = somarArray(tamanho, vetor);
	
	printf("A soma dos valores inseridos é... %d", resultado);
}
