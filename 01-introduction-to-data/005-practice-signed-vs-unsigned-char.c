#include <stdio.h>

int main(){

    /* find the decimal counterpart for the following values: */
    signed char v1 = 0xE2; // -30
    signed char v2 = 0x4B; // 75
    signed char v3 = 0x88; // -120
    signed char v4 = 0xF3; // -13
    signed char v5 = 0x9D; // -99

    unsigned char v6 = 0x33;  // 51
    unsigned char v7 = 0x8B;  // 139
    unsigned char v8 = 0x26;  // 38
    unsigned char v9 = 0xF5;  // 245
    unsigned char v10 = 0x6E; // 110

    printf("v1: %d\n", v1);
    printf("v2: %d\n", v2);
    printf("v3: %d\n", v3);
    printf("v4: %d\n", v4);
    printf("v5: %d\n", v5);
    printf("v6: %d\n", v6);
    printf("v7: %d\n", v7);
    printf("v8: %d\n", v8);
    printf("v9: %d\n", v9);
    printf("v10: %d\n", v10);
    return 0;
}
