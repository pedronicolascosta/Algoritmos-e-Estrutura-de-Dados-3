//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 05

#include <stdio.h>
#include <locale.h>

int primeiroPar(int tamanho, int array[]){
	int i, par=-1;
	
	for(i=0; i<tamanho; i++){
		if(array[i] % 2 == 0){
			par = array[i];
			return par;
		}
	}
	
	return par;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a[] = {5, 4, 2, 9, 8, 32};
	int par, tamanho = 6;
	
	par = primeiroPar(tamanho, a);
	
	printf("O primeiro valor par deste array é %d", par);
	
	return;
}
