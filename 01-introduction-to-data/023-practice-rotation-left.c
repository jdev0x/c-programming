#include <stdio.h>

int main(){
    unsigned char value = 0b10101010;
    unsigned char tmp = 0x00;
    
    tmp |= (value >> 6);
    value <<= 2;
    value |= tmp;
    
    printf("tmp: %x, value: %x\n", tmp, value);
    return 0;
    
}
