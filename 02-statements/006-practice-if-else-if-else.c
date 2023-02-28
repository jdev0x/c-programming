#include <stdio.h>

int main(){
    char message[] = "Welcome";
    char first_character = 'o';
    char second_character = 'h';
    char third_character = 'p';

    /* TODO: fix string length problem. */
    
    if(message[0] == first_character){
        printf("first letter is equal\n");
    }else if(message[1] == second_character){
        printf("second letter is equal\n");
    }else if(message[2] == third_character){
        printf("third letter is equal\n");
    }else{
        printf("no letters are equal\n");
    }
    return 0;
}
