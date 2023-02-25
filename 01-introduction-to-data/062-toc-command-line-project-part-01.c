#include <stdio.h>

/* toc data */
 int main(int argc, char *argv[]){
    if(argc!=2){
        printf("ERROR\n");
        return 0;
    }
    for(char * ptr=argv[1];  *ptr!='\0'; ptr++){
        printf("%c\n", *ptr);
    }

    return 0;
 }
