#include <stdio.h>
#include <string.h>

typedef struct person 
{
    char name[100];
    int age;
    float kg;
} t_person;

int main()
{   
    t_person person;
    t_person *p;

    strcpy(person.name, "Eliza Ramos");
    person.age = 29;
    person.kg = 70;

    p = &person;
    p->age = 30;

    printf("Age: %d\n", person.age);
    printf("%lu\n", sizeof(person));
    
    return 0;
}