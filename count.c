#include <stdio.h>

int main(int argc, char *argv[])
{

    char c = getchar();
    int cont = 0;

    while(c != EOF) // EOF means end of file 
    {
        cont++; 
        c = getchar();

    }

    printf("Quantity: %d\n", cont);
    return 0;
}