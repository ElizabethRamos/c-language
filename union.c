#include <stdio.h>

union etiqueta
{
    int first_value;
    float second_value;
} u;

int main()
{       
    union etiqueta e;
    e.first_value = 10;
    e.second_value = 2.14;

    printf("%d\n", e.first_value);
    printf("%f\n", e.second_value);
    return 0;
}