//autor: Pedro Nicolas Costa
//programa 03

#include <stdio.h>
int main() {
    int x = 30;
    int *p = &x;
    int **pp = &p;
    
    printf("%d\n", **pp);
    
    return 0;
}
