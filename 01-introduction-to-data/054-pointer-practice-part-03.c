#include <stdio.h>

int main(){
    unsigned int value = 0x4D8E6BCA;
    char *cptr = (char*)&value;

    cptr = cptr + 2;
    cptr--;
    cptr++;
    printf("%p -> %x\n", cptr, *cptr);
    
    return 0;
}
