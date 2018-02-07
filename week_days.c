#include <stdio.h>

int main(int argc, char *argv[])
{
/*
Weekdays:
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Check the Week days using switch case
*/
    int dia = 7;
    switch(dia)
    {
        case 1: 
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3: 
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday!");
            break;
        case 7:
            printf("Saturday");
            break;                        
    }
    return 0;
}

