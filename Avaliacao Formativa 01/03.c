//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 03

#include <stdio.h>
#include <locale.h>

int menorDoArray(int tamanho, int array[]){
	int i, menor;
	
	menor = array[0];
	
	for(i=0; i<tamanho; i++){
		if(array[i]<menor){
			menor = array[i];
		}
	}
	
	return menor;	
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[] = {5, 4, 2, 9, 8, 32};
	int menor, tamanho = 6;
	
	menor = menorDoArray(tamanho, a);
	
	printf("O menor valor deste array é %d", menor);
	
	return;
}
