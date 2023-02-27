/* argcnt ...*/
/* arguments count: x */
#include <stdio.h>

int main(int argc, char *argv []){
    printf("%d\n", argc-1);
    for(int count = 1; count < argc; count++){
        printf("%d.%s\n", count, argv[count]);
    }
    return 0;
}
