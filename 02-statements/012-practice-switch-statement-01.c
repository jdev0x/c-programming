#include <stdio.h>

int main(){
    char message[] = "DATA";
   
    switch(message[0]){
        case 'W':
        printf("its W\n");
        break;
        case 'A':
        printf("its A\n");
        break;
        case 'P':
        printf("its P\n");
        break;
        default:
        printf("its %c\n", message[0]);
       
    }
    return 0;
}
