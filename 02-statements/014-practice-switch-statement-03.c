#include <stdio.h>

int main(){
    char message [] = "WQ";
    switch(message[0]){
        case 'O':
            switch(message[1]){
                case 'A':
                    printf("OA\n");
                break;
                case 'E':
                    printf("OE\n");
                break;
            }
        break;
        case 'W':
            if(message[1] == 'Q'){
                printf("WQ\n");
            }else if(message[1] == 'R'){
                printf("WR\n");
            }
        break;
     
    }
    return 0;
}
