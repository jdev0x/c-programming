#include <stdio.h>

int main(){
    unsigned char byte = 0x0F; //00001111
    unsigned char bits [8]; 
//00000001 00000000 
    bits[0] |= (byte >> 7);
    bits[1] |= (byte >> 6) & 0x01;
    bits[2] |= (byte >> 5) & 0x01;
    bits[3] |= (byte >> 4) & 0x01;
    bits[4] |= (byte >> 3) & 0x01;
    bits[5] |= (byte >> 2) & 0x01;
    bits[6] |= (byte >> 1) & 0x01;
    bits[7] |= (byte >> 0) & 0x01;
    

    printf("%d %d %d %d %d %d %d %d\n", 
    bits[0], bits[1], bits[2], bits[3],
    bits[4], bits[5], bits[6], bits[7]);
    
    return 0;
}
