#include <stdio.h>
#include <stdlib.h> //qsort library's function

/*
function for sorting data
*/

//comparative criterion
int comp(const void * x, const void * y)
{
    /*
    if x is less than y, x must come before y
    */
    return (*(int*)x - *(int*)y);
}

int main()
{
    int vet[] = {10, 20, 5, 2, 6, 9, 15};
    int size_vet = sizeof(vet) / sizeof(int);
    int i;
/*
function that will order the elements
*/
    qsort(vet, size_vet, sizeof(int), comp);

    for(i = 0; i < size_vet; i++)
    {
        printf("%d ", vet[i]);
    }

    return 0;
}
