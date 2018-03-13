#include <stdio.h>

void f(int * v)
{
    printf("%d\n", *v);
}

int main()
{
    int v[] = {1, 2, 3, 4, 5};

    f(&v[2]);

    return 0;
}