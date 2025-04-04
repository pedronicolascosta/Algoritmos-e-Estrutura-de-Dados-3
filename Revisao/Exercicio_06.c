//Revisão N1
//Exercício 06
//Qual será a saída do programa?

#include <stdio.h>

void modificar(int *x, int *y) {
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

int main() {
    int a = 5, b = 7;
    int *p1 = &a, *p2 = &b;
    modificar(p1, p2);
    printf("%d %d", a, b);
    return 0;
}

