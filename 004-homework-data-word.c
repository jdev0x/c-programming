#include <stdio.h>
int main(){
    unsigned int v1= 0x2EBCDA97;
    unsigned char v2= 0xff;
    unsigned char v3= 0x00;
    unsigned short v4= 0x00;
    unsigned short v5= 0x00;
    unsigned int v6= 0x00;

    v2 &= v1;
    printf("v2:%x\n", v2);

    v3 |= (v1>>24);
    printf("v3:%x\n", v3);
    
    v4 |= (v1>>8);
    printf("v4:%x\n", v4);
  
    v5 |= v1;
    printf("v5:%x\n", v5);
//97bcda2e
    
    v6 |= (v1);
    v6 >>= 8;
    v6 <<= 16;
    v6 >>= 8;
    v6 |= (v1>>24);
    v6 |= (v1<<24);

    printf("v6:%x\n", v6);
    return 0;
}
