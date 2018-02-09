#include <stdio.h>
/*
Using the scanf for data entry.
*/
int main(int argc, char *argv[])
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Sua idade é: %d\n", idade);

    return 0;
}