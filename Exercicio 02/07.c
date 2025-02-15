//autor: Pedro Nicolas Costa
//programa 07

#include <stdio.h>

int main(){
	printf("Inicio do Programa 07\n\n");
	
	int tab[4][4], i, j;
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("Digite um valor para a linha %d coluna %d...", i+1,j+1);
			scanf("%d", &tab[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("%d ", tab[i][j]);
		}
		printf("\n");
	}
	
	printf("\nFim do Programa 07");
}
