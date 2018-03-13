#include <stdio.h>

void str_cpy(char * dest, char * orig)
{  
    int i = 0;

    while((dest[i] = orig[i]) != '\0')
        i++;

}

int main()
{
    char dest[10];
    char orig[] = "elizabeth";

    str_cpy(dest, orig);

    printf("%s\n", dest);

    return 0;
}