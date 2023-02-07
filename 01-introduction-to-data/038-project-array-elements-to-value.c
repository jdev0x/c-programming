#include <stdio.h>

int main(){
    unsigned int value = 0x00;
    unsigned char array[] = {0x78, 0x9E, 0x3B, 0xDB};

    value |= array[0];
    value = (value << 8) | array[1]; // 0x0000789e
    value = (value << 8) | array[2]; //0x00789e3b
    value = (value << 8) | array[3]; //0x789e3bdb

    printf("value: %x\n", value);

    return 0;
}
