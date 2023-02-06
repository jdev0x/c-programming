#include <stdio.h>

int main(){
    /* create an array of type short with 
       5 elements, and initialize it
    */  
    // index            0      1      2      3       4
    short values[5]={0xFF35,0xA18E,0x75EF,0xFFFF, 0xE723};
    printf("%x\n", values[2]);
    printf("%x\n", values[3]);
    values[3]= 0x02F3;
    printf("%x\n", values[3]);

    return 0;
}
