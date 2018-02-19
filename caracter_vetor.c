#include <stdio.h>

int main()
{
    char name[] = {'E', 'l', 'i', 'z', 'a', '\0'};

    int i = 0;

    for(i = 0; i <= 5; i++)

    /*while(name[i] != '\0')*/
    {
        printf("%c\n", name[i]);
        /*i++*/
    }

    return 0;
}