//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 04

#include <stdio.h>
#include <locale.h>

int somaArray(int tamanho, int array[]){
	int i, soma=0;
	
	for(i=0; i<tamanho; i++){
		soma += array[i];
	}
	
	return soma;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[] = {5, 4, 2, 9, 8, 32};
	int soma, tamanho = 6;
	
	soma = somaArray(tamanho, a);
	
	printf("A soma de todos os valores do array é igual a %d", soma);
	
	return;
}
