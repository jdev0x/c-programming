#include <stdio.h>

int main(){
    int x = 256;
    int y = 512;
    int * p1 = NULL;
    int * p2 = NULL;

    p1 = &x;
    p2 = &y;

    printf("%p -> %d - %p -> %d\n", p1, *p1, &x, x);
    printf("%p -> %d - %p -> %d\n", p2, *p2, &y, y);

    p1 = &y;
    p2 = &x;

    printf("%p -> %d - %p -> %d\n", p1, *p1, &y, y);
    printf("%p -> %d - %p -> %d\n", p2, *p2, &x, x);
    return 0;
}
