#include <stdio.h>

int main(){
    unsigned int value = 0x00;
    unsigned char array[] = {0x08, 0x0E, 0x0B, 0x0D, 0x02, 0x0F, 0x04, 0x0A};

    value |= array[0]; //0x00000008

    value = (value << 4) | array[1]; //0x0000008E

    value = (value << 4) | array[2];//0x000008EB

    value = (value << 4) | array[3];

    value = (value << 4) | array[4];

    value = (value << 4) | array[5];

    value = (value << 4) | array[6];

    value = (value << 4) | array[7];
    
    printf("value: %x\n", value);


    return 0;
}
