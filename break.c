#include <stdio.h>


int main()
{
    int num = 30; 

    while(1)
    {
        int n;

        printf("Digit a number: ");
        scanf("%d", &n);

        if(n == num)
        {
            printf("Congrats, you got it!\n\n");
            break;
        }
        else
            printf("Keep trying...\n\n");
    }

    return 0;
}