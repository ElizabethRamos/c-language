#include <stdio.h>

int bigger(int a, int b)
{
    int z = (a > b) ? a : b;
    return z;
}

int main(int argc, char *argv[])
{
    printf("%d\n", bigger(10, 100));
    return 0;
}

   
