//autor: Pedro Nicolas Costa
//programa 01

#include <stdio.h>

int main() {
    int x = 10;
    int *p;
    
    p = &x;
    
    printf("%d\n", *p);
    
    return 0;
}
