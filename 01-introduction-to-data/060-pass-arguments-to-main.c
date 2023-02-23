#include <stdio.h>

 int main(int argc, char *argv[]){
    if(argc != 3){
        printf("ERROR: usage <%s param1 param2>\n", argv[0]);
        return 0;
    }
    printf("you pass %s and %s\n", argv[1], argv[2]);
    return 0;
 }
