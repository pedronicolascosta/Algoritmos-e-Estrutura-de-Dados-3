//autor: Pedro Nicolas Costa
//exercicio 02

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("---Exercício 02---\n");
	
	printf("Digite sua idade... ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("\nVocê é maior de idade.");
	}
	else{
		printf("\nVocê NÃO É maior de idade.");
	}
	
}
