#include <stdio.h>
/*
print only the pisitive numbers, jumping the negatives 
*/

int main()
{
    int v[] = {-1, 10, -49, 15, 12, -18};
    int i;

    for(i = 0; i < 6; i++)
    {
        if(v[i] < 0)
            continue;
        printf("%d ", v[i]);    
    }
    return 0;
}