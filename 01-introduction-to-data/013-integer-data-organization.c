#include <stdio.h>

int main(){
    // char short int long
    //"ABCD"
    char c1 = 'A', c2 = 'B', c3 = 'C', c4 = 'D';
    unsigned short first_byte = 0x4142, second_byte = 0x4344;
    unsigned int characters = 0x41424344;
    /* message = "ABCDEFGH" */
    // 0100 0001 0100 0010  0100 0011 0100 0100 0100 0101 0100 0110 0100 0111 0100 1000;
    unsigned long message = 0x4142434445464748; 
    printf("message: %lu \n", message);
    return 0;
}
