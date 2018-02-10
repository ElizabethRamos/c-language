#include <stdio.h>

int main(int argc, char *argv[])
{
    int vet[100];
    int i;

    for(i = 0; i < 100; i++)
    {   
        vet[i] = i * 2;
    }

    printf("vet:\n");
    for(i = 0; i < 99; i++)
    {   
       printf("%d, ", vet[i]);
    }
    printf("%d\n", vet[99]);

    return 0;
}