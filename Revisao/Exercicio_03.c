//Revis�o N1
//Exerc�cio 03
//Qual ser� a sa�da do programa?

#include <stdio.h>

int main(){
	int valores[] = {2,4,6,8,10};
	int *p = valores + 3;
	printf("%d", *(p-1));
	return 0;
}
