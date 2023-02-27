#include <stdio.h>

int main(){
    int x = 5;
    if(x>3){
        printf("its greater\n");
    }
    x = 123;
    if(x < 150){
        printf("The x is less than 150.\n");
    }
    if(x<199){
        printf("it");
        printf("is");
        printf("less");
    }
    if(x<150){
        printf("The x is less than 150.\n");
        printf("This is a second statement\n");
    }
    return 0;
}
