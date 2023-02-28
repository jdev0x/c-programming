#include <stdio.h>

int main(){
    char message[] = "Welcome";
    char first_character = 'p';
    char second_character = 'e';
    char third_character = 'l';

    if(message[0] == first_character && 
       message[1] == second_character &&
       message[2] == third_character){
        printf("they are all equal\n");
    }else{
        printf("non are equal\n");
    }
    return 0;
}
