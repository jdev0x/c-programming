#include <stdio.h>

int main(){
    int * ptr = NULL;
    int value = 100;

    printf("%p and %d\n", ptr, value);
    ptr = &value;

    printf("%p -> %d\n", ptr, value);

    ptr = NULL;

    printf("%p\n", ptr);
    return 0;
}
