#include <stdio.h>

int main(){
   
    int value = 10;

    { 
        printf("one\n");
        printf("two\n");
        printf("three\n");
    }
    
    /* if(condition)
         Statement (Single | Block)
    */
    if(value == 10)
    {
        printf("one\n");
        printf("two\n");
        printf("three\n");
    }

   
    if(value == 10)
        printf("one\n");
    
    if(value == 10)
        printf("two\n");

    if(value == 10)
       printf("three");
    

    int xy = 10;

    {
        {
            {
                {
                    {
                        
                    }
                }
            }
        }
    }
}
