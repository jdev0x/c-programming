#include <stdio.h>

int main(){

    signed char v1 = 0xE7;
    unsigned char v2 = 0xE7;

    v1 = v1 >> 4; // hex=FE, binary=1111 1110, decimal=-2
    v2 = v2 >> 4; // hex=0E , binary=0000 1110, decimal=14

   printf("v1:%d, v2:%d\n", v1, v2);
 
    // print result

    return 0;
}
