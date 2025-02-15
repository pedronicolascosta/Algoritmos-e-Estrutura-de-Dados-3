//autor: Pedro Nicolas Costa
//exercicio 01

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[3], i, soma=0, produto;
	float media;
	
	printf("---Exercício 01---\n");
	
	for(i=0; i<3; i++){
		printf("Insira o %dº número... ", i+1);
		scanf("%d", &vetor[i]);
		soma += vetor[i];
	}
	
	media = soma/3;
	produto = vetor[0]*vetor[1]*vetor[2];
	
	printf("\n");
	
	printf("Soma...%d\n", soma);
	printf("Média...%2.f\n", media);
	printf("Produto...%d", produto);
}
