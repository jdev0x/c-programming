#include <stdio.h>

int main(){

    char v1 = 'A', v2 = 'B', v3 = 'C', v4 = 'D';
    unsigned int data = 0x00;
    data |= v4;
    data = (data<<8) | v3;
    data = (data<<8) | v2;
    data = (data<<8) | v1;

    printf("v2: %x, %d\n", data, data);
    return 0;
}
