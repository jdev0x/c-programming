#include <stdio.h>

int main(){ 
    char message [] = "Welcome to C";
    int x = 0;
    while (x <= 12)
    {
        printf("%c\n", message[x]);
        x++;
    }

    char *ptr = message;
    while (*ptr != '\0')
    {
        printf("%c\n", *ptr);
        ptr++;
    }
    
     x = 12;
    while (x >= 0)
    {
        printf("%c\n", message[x--]);
    }
    
    return 0;
}
