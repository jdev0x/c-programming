#include <stdio.h>

struct student
{
    unsigned int id;
    char name[100];
    unsigned char age;

};


int main(){
    struct student s;
    s.id = 14200;
    //s.name = "AlJawharah";
    s.age = 14;

    printf("id: %d, age: %d\n", s.id, s.age);
    return 0;
}
