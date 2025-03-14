//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 07

#include <stdio.h>
#include <locale.h>

void imprimeIndicePar(int tamanho, int array[]){
	int i;
	
	for(i=0; i<tamanho; i++){
		if(i % 2 == 0){
			printf("índice par %d -> valor %d\n",i,array[i]);
		}
	}
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[] = {5, 4, 2, 9, 8, 32};
	int tamanho = 6;
	
	imprimeIndicePar(tamanho, a);
	
	return;
}
