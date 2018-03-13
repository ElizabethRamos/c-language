#include <stdio.h>

void str_cpy2(char * dest, char * orig)
{
    while((*dest++ = *orig++) != '\0');
}

int main()
{
    char dest[20];
    char orig[] = "Eliza";

    str_cpy2(dest, orig);

    printf("%s\n", dest); 
    return 0;

}