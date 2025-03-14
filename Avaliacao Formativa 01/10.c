//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 10

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int m[3][3] = {{5,3,2},{6,3,7},{2,3,5}};
	int array[3];
	int i, x, soma;
	
	for(x=0; x<3; x++){
		soma = 0;
		for(i=0; i<3; i++){
			soma += m[i][x];
		}
		array[i] = soma;
		printf("Soma da %dº coluna -> %d \n", i+1, array[i]);
	}
	
	return;
}
