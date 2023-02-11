#include <stdio.h>

int main(){
    float price = 12.75f;
    int value = 1275;
    float distance = 14.78f;

    printf("distance: %.3f\n", distance);
    printf("price: %.2f, float-size: %lu\n", price, sizeof(float));
    return 0;
}
