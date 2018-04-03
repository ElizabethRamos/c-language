#include <stdio.h>
#include <ctype.h>


int main()
{
    char c = 'a';

    if(isalpha(c))
        printf("Caracter alfabético\n");
    else
        printf("Caracter não alfabetico\n") ;

    if(isupper(c))
        printf("Caracter maisculo\n");
    else
        printf("Caracter minusculo\n") ;    

    if(islower(c))
        printf("Caracter minusculo\n");
    else
        printf("Caracter maiusculo\n") ;

    if(isdigit(c))
        printf("É um dígito\n");
    else
        printf("Não é um dígito\n") ;

    printf("%c\n", tolower(c));
    printf("%c\n", toupper(c));         
    
    return 0;
}