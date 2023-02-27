//format string
//syntax fmstr string start end

#include <stdio.h>

int main (int argc, char *argv []){
    if(argc != 4){
        printf("ERROR, usage: %s string start end\n", argv[0]);
        return 0;
    }
    printf("%s%s%s\n", argv[2], argv[1], argv[3]);
    
    return 0;

}
