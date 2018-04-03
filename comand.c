#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 30;

    while(1)
    {
        int n;
        printf("\nDigit a number: ");
        scanf("%d", &n);

        if(num != n)
            system("clear");
        else
        {
            printf("Congrats! the number is right\n");
            break;
        }    
    }
    return 0;
}