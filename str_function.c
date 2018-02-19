#include <stdio.h>
#include <string.h>

int main()
{   
    char name[] = "Eliza";
    char sobrenome[]= "Ramos";

    strcat(name, sobrenome);

    printf("%s\n", name);

    return 0;
}
    