#include <stdio.h>

int main(){
    unsigned char value = 0b00110001;
    unsigned char tmp = 0x00;
    /*
     v: 00110001, t: 00000000
     v: 00110001, t: 00000000
     v: 01100010, t: 00000000
     v: 01100010, t: 00000000
    */

    tmp |= (value >> 7);
    value <<= 1;
    value |= tmp;
  
    printf("tmp: %x, value: %x\n", tmp, value);
    return 0;
    
}
