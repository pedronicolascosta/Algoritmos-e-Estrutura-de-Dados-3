//autor: Pedro Nicolas Costa
//programa 04

#include <stdio.h>

int main(){
	printf("Inicio do Programa 04\n");
	
	int vetor[5], i;
	
	for(i=0; i<5; i++){
		printf("Digite o %do valor inteiro... ", i+1);
		scanf("%d",&vetor[i]);
	}
	
	printf("\n--- Impressão Inversa ---\n");
	for(i=4; i>=0; i--){
		printf("%d \n", vetor[i]);
	}

	printf("\nFim do Programa 04");
}
