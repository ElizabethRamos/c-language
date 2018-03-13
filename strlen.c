#include <stdio.h>

int str_len(char * s)
{
    int size;

    for(size = 0; *s != '\0'; s++)
        size++;

     return size;

}

int main()
{   
    printf("%d\n", str_len("Eliza"));
    printf("%d\n", str_len("Ramos"));

    return 0;
} 