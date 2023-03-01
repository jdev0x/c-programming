#include <stdio.h>

int main(){
    char message[] = "DATA";

    if(message[0] == 'A'){
        printf("A\n");
    }else if(message[0] == 'B'){
        printf("B\n");
    } 
    else if(message[0] == 'C' ||
       message[0] == 'D'){
        printf("C or D\n");
    }else if (message[0] == 'E'){
        printf("E\n");
    }else if (message[0] == 'F' ||
              message[0] == 'G'){
        printf("F or G\n");
    }else{
        printf("%c\n", message[0]);
    }
    //switch statement

    switch(message[0]){
        case 'A':
            printf("A\n");
            break;
        case 'B':
            printf("B\n");
            break;
        case 'C':
        case 'D':
            printf("C or D\n");
            break;
        case 'E':
            printf("E\n");
            break;
        case 'F':
        case 'G':
            printf("F or G\n");
            break;
        default: 
            printf("%c\n", message[0]);
    }
    return 0;
}
