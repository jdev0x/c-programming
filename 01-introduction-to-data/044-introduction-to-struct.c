#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(){
    struct point p;
    p.x = 0;
    p.y = 0;
    printf("x:%d, y: %d\n", p.x, p.y);
    return 0;
}
