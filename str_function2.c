#include <stdio.h>
#include <string.h>

/*
functions that manipulate strings 
*/

int main()
{   
    char first_name[] = "Eliza";
    char last_name[] = "Ramos";
    char full_name[50];

    printf("Size of %s: %lu\n", first_name, strlen(first_name));
/*
strcmp compares 2 strings 
*/
    if(!strcmp(first_name, last_name))
        printf("Different...\n");
    else
        printf("Same...\n");
/*
strcopy copia o conteudo da uma variavel(first name) para a outra(full_name)
strcat concatena as duas variaveis (full_name, last name)
*/
    strcpy(full_name, first_name);
    strcat(full_name, last_name);

    printf("%s\n", full_name);

    return 0;
}