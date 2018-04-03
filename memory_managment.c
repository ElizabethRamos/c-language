#include <stdio.h>
#include <stdlib.h> //malloc, free functions
#define MAX 10


int main()
{
    int * vet;

    vet = (int * )malloc(MAX * sizeof(int));

    if(vet == NULL)
    {
        printf("Memoria insuficiente\n");
        exit(1);
    }
    //do something
    vet[0] = 1; 
    vet[1] = 2;

    printf("%d\n", vet[0]);

    return 0;
}