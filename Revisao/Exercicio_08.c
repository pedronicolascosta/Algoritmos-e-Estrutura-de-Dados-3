//Revis�o N1
//Exerc�cio 08
//Qual ser� a sa�da do programa?

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    p += 3;
    printf("%d", *(p - 2));
    return 0;
}

