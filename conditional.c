#include <stdio.h>

int main(int argc, char *argv[])
{
    int age = 81;

    if(age < 14)
    {
        printf("You're child");
    }

    else if(age >= 14 && age < 18)
    {
        printf("You're a teenager");
    }

    else if(age >= 18 && age < 40)

    {
        printf("Welcome to adult's life :) ");
    }

    else if(age > 30 && age < 80)

    {
        printf("You're still young! Keep living");
    }

    else 
    {
        printf("Forever young, I want to be forever young...");
    }
    return 0;
}