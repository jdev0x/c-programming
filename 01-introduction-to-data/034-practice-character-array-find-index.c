#include <stdio.h>

int main(){
    char msg[] = "From C to Python";

    for(int i = 0;i<16;i++){
        if (msg[i]=='P'){
            printf("%d\n", msg[i]);
            break;
        }
    }
    
    return 0;
    
}
