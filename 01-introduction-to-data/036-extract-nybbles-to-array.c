#include <stdio.h>

int main(){
    unsigned int value = 0x4D3CFA1B;
    unsigned char array[] = {0, 0, 0, 0, 0, 0, 0, 0};

    array[0] |= (value);
    array[0] &= 0x0F;
   
    array[1] |= (value>>4);
    array[1] &= 0x0F;
   
    array[2] |= (value>>8);
    array[2] &= 0x0F;
    
    array[3] |= (value>>12);
    array[3] &= 0x0F;

    array[4] |= (value>>16);
    array[4] &= 0x0F;

    array[5] |= (value>>20);
    array[5] &= 0x0F;

    array[6] |= (value>>24);
    array[6] &= 0x0F;

    array[7] |= (value>>28);
    array[7] &= 0x0F;

    printf("%x %x %x %x %x %x %x %x\n", 
    array[0], array[1], array[2], array[3],
    array[4], array[5], array[6], array[7]);
    return 0;
}
