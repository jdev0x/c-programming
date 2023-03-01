#include <stdio.h>

int main(){
    int value = 10;
    // value -> 10(A) else (B)
    if(value == 93){
        printf("A\n");
    }else{
        printf("B\n");
    }

    // switch-statement
    switch(value){
        case 93:
            printf("A\n");
            break;
        default:
            printf("B\n");
            break;
    }
    return 0;
}
