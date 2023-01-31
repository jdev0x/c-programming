// Online C compiler to run C program online
#include <stdio.h>

int main() {
    unsigned int data = 0xCF2D;
    unsigned char n1 = 0x00;
    unsigned char n2 = 0x00;
    unsigned char n3 = 0x00;
    unsigned char n4 = 0x00;
    
    n1 |= data;
    n1 >>= 4;
    n2 |= data;
    n2 <<=4;
    n3 |= (data>>8);
    n3 <<= 4;
    n4 |= (data>>12);
    
    printf("%x %x %x %x\n", n1, n2, n3, n4);

    return 0;
}
