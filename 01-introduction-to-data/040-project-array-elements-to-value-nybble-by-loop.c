#include <stdio.h>

int main(){
    unsigned int value = 0x00;
    unsigned char array[] = {0x08, 0x0E, 0x0B, 0x0D, 0x02, 0x0F, 0x04, 0x0A};

    value |= array[0];
    
    for(int i = 0; i < 8; i++){
        value = (value << 4) | array[i];
    }
    
    
    printf("value: %x\n", value);


    return 0;
}
