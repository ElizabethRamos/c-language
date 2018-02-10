#include <stdio.h>

int main(int argc, char *argv[])
{
    int vet[] = {1, 2, 3, 4};
    int i;

    for(i = 0; i < 4; i++)
    {   
        vet[i] = vet[i] * 2;
    }

    for(i = 0; i < 4; i++)
    {   
       printf("Each vet element * 2: %d\n", vet[i]);
    }

    return 0;
}