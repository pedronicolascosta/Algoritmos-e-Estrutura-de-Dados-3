//autor: Pedro Nicolas Costa
//Avaliação Formativa 01
//Exercicio 08

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double a[] = {5, 9, 3, 0, 3, 5.6};
	double b[] = {8, 8.1, 3, 9, 1, 0};
	double c[6];
	int i;
	
	for(i=0; i<6; i++){
		c[i] = a[i] + b[i];
		printf("%.1f \n", c[i]);
	}
	
	return;
}
