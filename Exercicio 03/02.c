//autor: Pedro Nicolas Costa
//programa 02

#include <stdio.h>
void modificar(int *p) {
    *p = 20;
}

int main() {
    int x = 5;
    
    modificar(&x);
    
    printf("%d\n", x); 
    
    return 0;
}
