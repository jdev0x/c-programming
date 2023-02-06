#include <stdio.h>

int main(){
    char msg[] = "**from **Assembly to C*";
    unsigned char count = 0;
    for (int i = 0; i < 23; i++){
        if (msg[i] == '*'){
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
    
}
