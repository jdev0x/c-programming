#include <stdio.h>

int main(){
    int x = 15;
    while (x != 0)
    {
        printf("%d\n", x);
        x--;
    }
    x++;
    while (x <= 15)
    {
       printf("%d\n", x);
       x++;
    }

    return 0;
}
