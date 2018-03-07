#include <stdio.h>

int main()
{
    int n = 10;
    int * p;
    /*
    p é a variavel para onde o ponteiro aponta, e que aponta para o endereço de n;
    */
    p = &n;

    (*p)++;
    /*
    o asterisco é usado para apontar o endereço da variavel
    */
    printf("%d\n", *p);
    /*
    cria um vetor, e um ponteiro para o primeiro elemento do vetor
    */
    int vet[] = {1, 2, 3, 4};
    int * pvet = &vet[0];

    printf("%d\n", *pvet);
    /*
    cria um for para percorrer todos os elementos do vetor
    */
    for(pvet = &vet[0]; pvet != &vet[4]; pvet++)
        printf("%d ", *pvet);
    return 0;
}