#include <stdio.h>

int main(){
    unsigned int value = 68;
    if((value & 1) == 0){
        printf("its even\n");
    }
    if((value & 0b00000100) || (value & 0b01000000)){
        printf("True\n");
    }

    return 0;
}
