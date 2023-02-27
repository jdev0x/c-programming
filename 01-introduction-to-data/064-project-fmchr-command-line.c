//format character
//syntax fmchr string start end

#include <stdio.h>

int main (int argc, char *argv []){
    if(argc != 4){
        printf("ERROR, usage: %s string start end\n", argv[0]);
        return 0;
    }
    for(char *ptr = argv[1]; *ptr!='\0'; ptr++){
        printf("%s%c%s\n", argv[2], *ptr, argv[3]);
    }
    return 0;

}
