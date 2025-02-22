//autor: Pedro Nicolas Costa
//programa 04

#include <stdio.h>
void modificar(int *p) {
    *p = 50;
}

int main() {
    int x = 10;
    int *p = &x;
    
    modificar(p);
    
    printf("%d\n", x); 
    
    return 0;
}

