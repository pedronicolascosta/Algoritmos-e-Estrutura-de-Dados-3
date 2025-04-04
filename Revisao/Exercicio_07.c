//Revis�o N1
//Exerc�cio 07
//Qual ser� a sa�da do programa?

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, n = 5;
    arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Erro na aloca��o de mem�ria");
        return 1;
    }
    int i;
    for (i = 0; i < n; i++) {
        arr[i] = i * 2;
    }
    free(arr);
    arr[2] = 10;  // Acesso a mem�ria j� liberada
    printf("%d", arr[2]);
    return 0;
}

