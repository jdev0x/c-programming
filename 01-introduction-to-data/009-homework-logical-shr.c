#include <stdio.h>

int main(){
    unsigned char v1 = 0xF2; //3c
    // v1=v1>>2;
    v1 >>= 2;
    printf("v1: %x\n", v1);
    return 0;
}
