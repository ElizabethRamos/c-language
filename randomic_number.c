#include <stdio.h>
#include <stdlib.h> //srand, rand
#include <time.h> // time

int main()
{
    srand(time(NULL));

    //aleatory number 1..10
    int num = rand() % 10 + 1;

    printf("%d\n", num);

    return 0;
}

