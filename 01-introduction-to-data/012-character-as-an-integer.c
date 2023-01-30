#include <stdio.h>

int main(){
    char ch_binary = 0b01011001;
    char ch_octal = 0131;
    char ch_decimal = 89;
    char ch_hexadecimal = 0x59;
    char ch_ascii = 'Y';
    
    printf("%d %d %d %d %d\n", ch_binary, ch_octal, ch_decimal, ch_hexadecimal, ch_ascii);
    return 0;
}
