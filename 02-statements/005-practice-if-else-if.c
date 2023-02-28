#include <stdio.h>

int main(){
    char message[] = "Welcome";
    char first_character = 'W';

    if(message[0] == first_character){
        printf("its equal\n");
    }else{
        printf("its not equal\n");
    }
    return 0;
}
