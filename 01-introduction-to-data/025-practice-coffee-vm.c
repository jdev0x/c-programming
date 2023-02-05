#include <stdio.h>

int main(){
    unsigned char order = 0b00000000;
    /* Step 1: Cold*/
    order |= 0b00000001;
    /* Step 2: Coffee*/
    order |= 0b00000010;
    /* Step 3: Large Size*/
    order |= 0b00001000;
    /* Step 4: Extra Sugar*/
    order |= 0b00110000;
    /*Step 5: With Milk*/
    order |= 0b01000000;

    printf("order %x\n", order);
    return 0;
}
