//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 09

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int m[3][3] = {{5,3,2},{6,3,7},{2,3,5}};
	int i,x, maior=0;
	
	for(i=0; i<3; i++){
		for(x=0; x<3; x++){
			if(m[i][x] > maior){
				maior = m[i][x];
			}
		}
	}
	
	printf("O maior valor inteiro dessa matriz é %d", maior);
	
	return;
}
