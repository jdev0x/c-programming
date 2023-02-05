#include <stdio.h>

int main(){
    unsigned int value = 0x279E3D4F;
    unsigned char byte = 0x00;

    /* rotate right 1-byte */
    
    byte |= value;
    value >>= 8;
    value |= (byte << 24);
    
    printf("value: %x, byte: %x\n", value, byte);

    return 0;
}
