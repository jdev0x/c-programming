#include <stdio.h>

int main(){
    // FDEC
    unsigned int value = 0x46444543;
    char v1 = 0x00, v2 = 0x00, v3 = 0x00, v4 = 0x00;

    // unpack
    v1 |= value;
    v2 |= (value >> 8);
    v3 |= (value >> 16);
    v4 |= (value >> 24);

    printf("%c %c %c %c\n", v4 , v3 , v2, v1);

    return 0;
}
