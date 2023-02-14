#include <stdio.h>

int main(){
    unsigned int value = 0x4D8E6BCA;
    char *cptr = (char*)&value;
    short *sptr = (short*)&value;

    printf("\ncharacter view\n");
    printf("%p -> %x\n", cptr, *cptr);
    cptr++;
    printf("%p -> %x\n", cptr, *cptr);
    cptr++ ;
    printf("%p -> %x\n", cptr, *cptr);
    cptr++;
    printf("%p -> %x\n", cptr, *cptr);

    printf("\nshort view\n");
    printf("%p -> %x\n", sptr, *sptr);
    sptr++;
    printf("%p -> %x\n", sptr, *sptr);
    

    return 0;
}
