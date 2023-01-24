#include <stdio.h>

int main(){

    unsigned char byte = 0x81; // 129
    signed char value = 0x81; // -127

    // unsigned byte 1000 0001
    // shift-left:  byte = byte << 2 (00000100) 0x04
    // shift-right: byte = byte >> 2 (00100000) 0x20 logical shift right
    
    // signed value 1000 0001
    // shift-left:  value = value << 2 (00000100) 0x04
    // shift-right: value = value >> 2 () arithmetic shift right

    byte = byte >> 3;
    printf("byte: %d\n", byte);

    // value = value << 1;
    // printf("value: %d\n", value);

    // byte = byte << 1;
    // printf("byte: %d\n", byte);

    value = value >> 3; // 1100 0000 0xC0
    printf("value: %d\n", value);
    return 0;
}
