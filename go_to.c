#include <stdio.h>
/*
use goto to out of two laces
*/

int main()
{
    int vetor1[] = {1, 2, 3, 4};
    int vetor2[] = {2, 5, 6, 7};

    int i, j;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(vetor1[i] == vetor2[j])
            goto find;
        }
    }
    find:
        printf("Find in position %d\n", i);
    return 0;
    return 0;
}