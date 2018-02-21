#include <stdio.h>

void f (int * age)
{
    *age = 20; //age is the pointer that changes the value of age
}

int main()
{
    int age = 10;
    f(&age);
    printf("%d\n", age);

    return 0;
}