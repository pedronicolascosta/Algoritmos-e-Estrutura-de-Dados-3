//Revisão N1
//Exercício 03
//Qual será a saída do programa?

#include <stdio.h>

int main(){
	int valores[] = {2,4,6,8,10};
	int *p = valores + 3;
	printf("%d", *(p-1));
	return 0;
}
