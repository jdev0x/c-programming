#include <stdio.h>

int main(){

    /* Use bitwise operations to make v1 = 0xF33C7F6A */
    unsigned int v1 = 0xFF2C3D4E;

    v1 &= 0xF3FFFFFF;
    v1 |= 0x00300000; 
    v1 |= 0x00007000;
    v1 |= 0x00000F00;
    v1 |= 0x00000060;
    v1 &= 0xFFFFFFFA;

    printf("v1: 0x%X\n", v1);

    return 0;
}
