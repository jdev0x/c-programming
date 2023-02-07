#include <stdio.h>

int main(){
    unsigned int value = 0x4D3CFA1B;
    unsigned char array[] = {0, 0, 0, 0, 0, 0, 0, 0};

    for(int x = 0, y = 0 ; x < 8; x++, y+= 4){
        array[x] |= (value >> y);
        array[x] &= 0x0F;
    }

    printf("%x %x %x %x %x %x %x %x\n", 
    array[0], array[1], array[2], array[3],
    array[4], array[5], array[6], array[7]);

    return 0;
}
