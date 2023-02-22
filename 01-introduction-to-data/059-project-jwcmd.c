#include <stdio.h>

int main(int argc, char * argv[]){
    if(argc != 2){
        printf("ERROR - usage: jwcmd <input>\n");
        return 0;
    }else{
        char * input = argv[1];
        printf("ascii code for %c is %d\n", *input, *input);
        
    }
  return 0;
}
