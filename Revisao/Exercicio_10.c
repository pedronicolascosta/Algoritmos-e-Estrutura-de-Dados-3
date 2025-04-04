//Revis�o N1
//Exerc�cio 10
//Qual ser� a sa�da do programa?

#include <stdio.h>
#include <stdlib.h>

struct Aluno {
    int matricula;
    float nota;
};

int main() {
    struct Aluno *a = (struct Aluno *) malloc(sizeof(struct Aluno));
    if (a == NULL) {
        printf("Erro na aloca��o de mem�ria\n");
        return 1;
    }
    a->matricula = 1234;
    a->nota = 8.5;
    printf("Matricula: %d, Nota: %.2f\n", a->matricula, a->nota);
    free(a);
    return 0;
}

