#include <stdio.h>

int main(){
    int x = 100;
    int * p1 = &x;
    int y = 250;
    int * p2 = &y;
    printf("%p -> %d\n", p2, y);
    printf("%p (%p)-> %d\n", p1, &x, x);
    return 0;
} 
