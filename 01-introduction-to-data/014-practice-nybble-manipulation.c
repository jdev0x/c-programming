#include <stdio.h>

int main(){
    /*
    use bitwise and/or shift operations to
       extract the nybbles from data.
    */
    unsigned short data = 0x1CAB;
    
    unsigned char nybble_1 = 0x00;
    unsigned char nybble_2 = 0x00;
    unsigned char nybble_3 = 0x00;
    unsigned char nybble_4 = 0x00;
    
    nybble_1 |= data;
    nybble_1 &= 0x0F;
    
    nybble_2 |= data;
    //nybble_2 &= 0xF0;
    nybble_2 >>= 4;

    nybble_3 = data>>8;
    nybble_3 &= 0x0F;

    nybble_4 = data>>12;
    
    printf("%x %x %x %x\n", nybble_1, nybble_2, nybble_3, nybble_4);
     
    return 0;
}
