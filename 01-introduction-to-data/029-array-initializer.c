#include <stdio.h>

int main(){

    signed char values[4];
    signed char values2[4]={1,2,3,4};
    values[0]= 10;
    values[1]= 20;
    values[2]= 30;
    values[3]= 40;
    
    printf("%d %d %d %d\n", values[0], values[1], values[2],values[3]);
    printf("%d %d %d %d", values2[0], values2[1], values2[2], values2[3]);

    return 0;
}
