#include <stdio.h>

int main(){
    signed char v1 = 0x62; //0x0C
    signed char v2 = 0xC8; //0xF2

    v1 >>=3;
    v2 >>=2;
    
    printf("v1: %x\n", v1);
    printf("v2: %x\n", v2);
  
    return 0;
}
