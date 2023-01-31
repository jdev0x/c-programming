#include <stdio.h>

int main(){
    unsigned int value = 0x6B7325A1;

    unsigned short little_endian = 0x00;
    unsigned short big_endian = 0x00;

   big_endian |= value;
   little_endian |=(value>>8) & 0x00FF;
   little_endian |= value<<8;
   printf("little-endian: %x\n", little_endian);
   printf("big-endian: %x\n", big_endian);    
    return 0;
}
