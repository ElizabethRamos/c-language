#include <stdio.h>
/*
starting the counter of an empty loop.
*/

int main(int argc, char *argv[])
{
    int c;

    for(c = 0; c < 100; c++);

    printf("%d\n", c);

    return 0;
}