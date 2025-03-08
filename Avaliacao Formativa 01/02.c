//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 02

#include <stdio.h>

void imprimeArray(int tamanho, int array[]){
	int i;
	
	for(i=0; i<tamanho; i++){
		printf("%d \n", array[i]);
	}	
}

int main(){
	int a[] = {5, 4, 2, 9, 8, 32};
	int tamanho = 6;
	
	imprimeArray(tamanho, a);
	
	return;
}
