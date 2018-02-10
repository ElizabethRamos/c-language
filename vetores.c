#include <stdio.h>

int main(int argc, char *argv[])
{
    int vet[] = {2, 4, 6, 8};
    int i;

    for(i = 3; i >= 0; i--)
    {   
        printf("Before  i = %d, vet[%d] = %d\n", i, i, vet[i]); 
        vet[i] = vet[i] * 2;
        printf("After i = %d, vet[%d] = %d\n\n", i, i, vet[i]); 
    }

    for(i = 0; i < 4; i++)
    {   
       printf("Each vet element *º 2: %d\n", vet[i]);
    }

    return 0;
}