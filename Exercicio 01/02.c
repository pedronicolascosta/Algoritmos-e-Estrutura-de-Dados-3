//autor: Pedro Nicolas Costa
//exercicio 02

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	
	printf("---Exerc�cio 02---\n");
	
	printf("Digite sua idade... ");
	scanf("%d", &idade);
	
	if(idade >= 18){
		printf("\nVoc� � maior de idade.");
	}
	else{
		printf("\nVoc� N�O � maior de idade.");
	}
	
}
