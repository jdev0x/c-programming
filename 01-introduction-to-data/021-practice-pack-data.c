#include <stdio.h>

int main(){
    unsigned int v1 = 0x00;
    unsigned short v2 = 0x00;
    /* 6-byte: [v1|v2] */

    unsigned char a = 'A', b = 'B', c = 'C', d = 'D', e = 'E', f = 'F';
    
    v1 |= d;
    v1 = (v1 << 8) | c;
    v1 = (v1<<8) | b;
    v1 = (v1<<8) | a;

    v2 |= f;
    v2 = (v2<<8) | e;

    printf("%x%x\n", v2, v1);

    return 0;
}
