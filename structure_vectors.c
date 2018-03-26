#include <stdio.h>
/*
 a structure vector(people).
*/
struct person
{
    char name[20];
    int age;
} people[] = 
{
    {"eliza", 29},
    {"maria", 10},
    {"joao", 25},
    {"jose", 15},
    {"ana", 10}
};

int main()
{   
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("%s %d\n", people[i].name, people[i].age);
    }
    return 0;
}

