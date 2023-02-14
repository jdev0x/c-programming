#include <stdio.h>

int main(){
    int x = 0x41424344;
    int * iptr = &x;
    char * cptr = (char*)&x;
    short * sptr = (short*)&x;
    
    printf("\ninteger layout\n");
    printf("%p -> %x\n\n", iptr, *iptr);
    printf("short layout\n");
    printf("%p -> %x\n", sptr, *sptr);
    sptr++;
    printf("%p -> %x\n\n", sptr, *sptr);

    printf("character layout\n");
    printf("%p -> %x\n", cptr, *cptr);
    cptr++;
    printf("%p -> %x\n", cptr, *cptr);
    cptr++;
    printf("%p -> %x\n", cptr, *cptr);
    cptr++;
    printf("%p -> %x\n", cptr, *cptr);
    
    return 0;
}
