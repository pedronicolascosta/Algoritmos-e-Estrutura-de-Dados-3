//Revisão N1
//Exercício 07
//Qual será a saída do programa?

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n = 5;
    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Erro na alocação de memória");
        return 1;
    }
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    free(arr);
    arr[2] = 10;  // Acesso a memória já liberada
    printf("%d", arr[2]);
    return 0;
}

