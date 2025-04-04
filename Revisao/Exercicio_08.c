//Revisão N1
//Exercício 08
//Qual será a saída do programa?

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    p += 3;
    printf("%d", *(p - 2));
    return 0;
}

