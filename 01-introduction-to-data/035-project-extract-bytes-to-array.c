#include <stdio.h>

int main(){
    unsigned int value = 0x2E4CDB6F;
    unsigned char array[] = {0, 0, 0, 0};

    array[0] |= value;
    array[1] |= (value>>8);
    array[2] |= (value>>16);
    array[3] |= (value>>24);

    printf("%x %x %x %x\n", array[0], array[1], array[2], array[3]);

    return 0;
}
