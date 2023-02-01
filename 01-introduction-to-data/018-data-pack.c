#include <stdio.h>

int main(){
    unsigned int v1 = 0x00;
    unsigned char b0 = 0x2E, b1 = 0x7F, b2 = 0x8A, b3 = 0xDB;

    /* Pack b0-b3 into v1 as the following:               */
    /* v1:                                                */
    /******************************************************/
    /*    b3      |     b2      |     b1      |     b0    */
    /******************************************************/

    v1 |= b3;
    v1 = (v1 << (sizeof(unsigned char) * 8)) | b2;
    v1 = (v1 << (sizeof(unsigned char) * 8)) | b1;
    v1 = (v1 << (sizeof(unsigned char) * 8)) | b0;

    printf("v1: %x\n", v1);

    unsigned int v2 = 0x00;
    unsigned short low16 = 0x2EF1, high16 = 0x64DC;

    /* Pack low16 and high16 into v2 as the following:    */
    /* v2:                                                */
    /******************************************************/
    /*          high16           |          low16         */
    /******************************************************/

    v2 |= high16;
    v2 = (v2 << (sizeof(unsigned short) * 8)) | low16;
    printf("v2: %x\n", v2);

    
    return 0;
}
