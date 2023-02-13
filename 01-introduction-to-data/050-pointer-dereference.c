#include <stdio.h>

int main(){
    int x = 100;
    int *ptr = &x;

    printf("%p -> %d\n", &x, x);
    printf("%p -> %d\n",ptr,*ptr);

    *ptr = 300;

    printf("%d\n", x);
    
    return 0;
}
