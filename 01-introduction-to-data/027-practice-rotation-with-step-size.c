#include <stdio.h>

int main(){
    unsigned char step_size = 1; //bit
    unsigned int value = 0x47F25DCB;
    // 0100 0111 1111 0010 0101 1101 1100 1011
    unsigned int tmp = 0x00;

    /* rotate left 3 steps */

    tmp |= (value >> (32 - step_size) );
    value <<= (step_size * 3);
    value |= tmp;


    /* rotate right 2 steps */
    //0x3F92EE58
    // 0000 1111 1110 0100 1011 1011 1001 0110
    //0x0FE4BB96
    

    tmp |= (value << (32 - step_size));
    value >>= (step_size * 2);
    value |= tmp; 


    printf("value: %x, tmp: %x\n", value, tmp);
    return 0;
}
