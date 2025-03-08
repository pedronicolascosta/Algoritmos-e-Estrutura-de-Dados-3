#include <stdio.h>
#include <stdlib.h>

int main() {
	int num_alunos;
	int i;
	
	printf("Quantos alunos? ");
	scanf("%d", &num_alunos);
	
	// Aloca dinamicamente um array para armazenar as notas
	float *notas = (float *) malloc(num_alunos * sizeof(float));
	
	if (notas == NULL) { // Verifica se a alocação foi bem-sucedida
		printf("Erro na alocação de memória!\n");
		return 1;
	}
	
	// Preenchendo as notas
	for (i = 0; i < num_alunos; i++) {
		printf("Digite a nota do aluno %d: ", i + 1);
		scanf("%f", &notas[i]);
	}
	
	// Exibindo as notas
	printf("Notas dos alunos:\n");
	
	for (i = 0; i < num_alunos; i++) {
		printf("Aluno %d: %.2f\n", i + 1, notas[i]);
	}
	
	// Liberando a memória alocada
	free(notas);
	
	return 0;
}
