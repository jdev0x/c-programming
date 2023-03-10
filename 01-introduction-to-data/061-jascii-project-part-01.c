#include <stdio.h>

 int main(int argc, char *argv[]){
    if(argc != 3){
        printf("ERROR: usage <%s b|o|d|h value>\n", argv[0]);
        return 0;
    }
    if(argv[1][0] == 'd' || argv[1][0] == 'D'){
        for(char * cptr = argv[2]; *cptr != '\0'; cptr++){
            printf("%d ", *cptr);
        }
    }else if(argv[1][0] == 'h' || argv[1][0] == 'H'){
        for(char * cptr = argv[2]; *cptr != '\0'; cptr++){
            printf("0x%x ", *cptr);
        }
    }else if(argv[1][0] == 'o' || argv[1][0] == 'O'){
        for(char * cptr = argv[2]; *cptr != '\0'; cptr++){
            printf("%o ", *cptr);
        }
    }else if(argv[1][0] == 'b' || argv[1][0] == 'B'){
        for(char * cptr = argv[2]; *cptr != '\0'; cptr++){
            char ch = *cptr;
            unsigned char bitmask = 0x80;
            for(int i = 7; i >= 0; i--){
                if((ch & bitmask) > 0){
                    printf("1");
                }else{
                    printf("0");
                }
                bitmask >>= 1;
            }
            printf("  ");
        }
    }
    else{
        printf("invalid number type");
    }
    
    printf("\n");

    return 0;
 }
