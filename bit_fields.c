#include <stdio.h>

struct
{
    unsigned int chave : 1;
    unsigned int externo: 1;
}t_flags;

int main()
{   
    printf("%u\n", t_flags.chave);
    t_flags.chave = 1; 
    printf("%u\n", t_flags.chave);

    return 0;
}