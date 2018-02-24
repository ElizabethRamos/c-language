#include <stdio.h>
#include <string.h>

struct person 
{
    char name[100];
    int age;
    float kg;
};

int main()
{   
    struct person p;

    strcpy(p.name, "Eliza Ramos");
    p.age = 29;
    p.kg = 70;

    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Name: %f\n", p.kg);

    return 0;
}