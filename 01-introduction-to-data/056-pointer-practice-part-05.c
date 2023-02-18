#include <stdio.h>

int main(){
    unsigned char values [] = {
        0x9E, 0x88, 0xDB, 0x5B, 0x3D,
        0x7E, 0xAC, 0x22, 0x1F, 0xFB,
        0x92, 0x25, 0x66, 0x14, 0x83,
        0x55, 0x77, 0x13, 0xDB, 0xFF,
    };

    unsigned char * aptr = values;
    unsigned char * bptr = values;
    unsigned char * cptr = values;
    unsigned char * dptr = values;

    aptr = aptr + 5;
    bptr++;
    aptr--;
    cptr = aptr + 2;
    dptr = dptr + 12;

    printf("aptr: %x, bptr: %x, cptr: %x, dptr: %x\n", *aptr, *bptr, *cptr, *dptr);

    return 0;
}
