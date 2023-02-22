#include <stdio.h>

int main(){
    char message [] = "Welcome to C";
    void * vptr = message;
    char * cptr = NULL;

    vptr = vptr + 5;
    cptr = vptr;
    cptr = cptr - 4;
    printf("%d -> %c\n", *cptr, *cptr);
    
    return 0;
}
