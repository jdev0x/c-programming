#include <stdio.h>

int main(){
    int x = 123;
    switch(x){
        case 100:
            printf("the value of x is 100\n");
            break;
        case 123:
            printf("the value of x is 123\n");
            break;
        case 456:
            printf("the value of x is 456\n");
            break;
        default:
            printf("none of the above values matches the value of x\n");
            break;
    }

    //if-statement

    if(x == 100){
        printf("the value oif x is 100\n");
    }else if(x == 123){
        printf("the value of x is 123\n");
    }else if(x == 456){
        printf("the value of x is 456\n");
    }else{ //default
        printf("none of the above values matches the value of x\n");
    }
    
}
