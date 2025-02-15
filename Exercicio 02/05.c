//autor: Pedro Nicolas Costa
//programa 05

#include <stdio.h>

int main(){
	printf("Inicio do Programa 05\n\n");
	
	int vetor[5], i, qtde=0, soma=0;
	float media;
	
	for(i=0; i<5; i++){
		printf("Digite o %do valor inteiro... ", i+1);
		scanf("%d",&vetor[i]);
		soma += vetor[i];
	}
	
	media = soma/5;
	
	for(i=0; i<5; i++){
		if(vetor[i]>media){
			qtde++;
		}
	}
	
	printf("\nMedia dos valores digitados: %.2f \n", media);
	printf("Quantidade de valores inseridos acima da media: %d", qtde);
	
	printf("\n\nFim do Programa 05");
}
