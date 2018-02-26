#include <stdio.h>

/*
factorial of a number using recursion
n! = n * (n -1) * (n - 2) ... 1
5! = 5 * 4 * 3 * 2 * 1 = 120;
4! = 4 * 3 * 2 * 1 = 24;
...

fat(5) = 5 * fat(4) = 120
fat(4) = 4 * fat(3) = 24
fat(3) = 3 * fat(2) = 6
fat(2) = 2 * fat(1) = 2
fat(1) = 1 * fat(0) = 1
*/

int factorial(int num)
{
    if(num == 0 || num == 1)
        return 1;

    return (num * factorial(num -1));
}

int main()
{   

    printf("%d\n", factorial(5));

    return 0;
}