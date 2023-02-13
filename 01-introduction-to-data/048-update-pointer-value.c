#include <stdio.h>

int main(){
    int x = 10, y = 20;
    int * ptr = &x;

    printf("%p -> %d\n", ptr, x);
    ptr = &y;
    printf("%p -> %d\n", ptr, y);
    
    return 0;
}
