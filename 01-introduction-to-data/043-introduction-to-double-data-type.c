#include <stdio.h>

int main(){
    double price = 12.75;
    double distance = 18.2949321835;

    printf("distance: %lf\n", distance);
    printf("price: %f, double-size: %lu\n", price, sizeof(double));
    return 0;
}
