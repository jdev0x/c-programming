#include <stdio.h>

int main(){

    /* Copy low order 16-bit from v1 to v2 */
    unsigned int v1   = 0x23C4D5A8;
    unsigned short v2 = 0x0000;
    
    v2=v2|v1;
    printf("v2: %X\n", v2);
    return 0;
}
