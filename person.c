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
    struct person p[2];

    strcpy(p[0].name, "Eliza Ramos");
    p[0].age = 29;
    p[0].kg = 70;

    strcpy(p[1].name, "Yasmin Ramos");
    p[1].age = 9;
    p[1].kg = 32;

    
    for(int i = 0; i < 2; i++)
    {
        printf("Name: %s\n", p[i].name);
        printf("Age: %d\n", p[i].age);
        printf("kg: %f\n\n", p[i].kg);
    }
    return 0;
}