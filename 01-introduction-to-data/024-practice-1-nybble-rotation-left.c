#include <stdio.h>

int main(){
    unsigned short value = 0x2E4C;
    unsigned char tmp = 0x00;

    /* rotate 1-nybble */
    tmp |= (value >> 12);
    value <<= 4;
    value |= tmp;
    
    printf("value: %x, tmp: %x\n", value, tmp);

    return 0;
    
}
