#include <stdio.h>

int main(){
    int grade = 90;

    if(grade == 100){
        printf("A\n");
    }else if(grade == 90){
        printf("B\n");
    }else if(grade == 80){
        printf("C\n");
    }else if(grade == 70){
        printf("D\n");
    }
    else if(grade == 60){
        printf("F\n");
    }else{
        printf("your grade is too low\n");
    }

    printf("Thank you\n");

    return 0;
}
