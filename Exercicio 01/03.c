//autor: Pedro Nicolas Costa
//exercicio 03

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, i=1;
	
	printf("---Exerc�cio 03---\n");
	
	printf("Insira um n�mero inteiro... ");
	scanf("%d", &n);
	
	while(i<=n){
		printf("%d \n", i);
		i++;
	}
}
