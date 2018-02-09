#include <stdio.h>

int main(int argc, char *argv[])
{

    int c;

    c = getchar();

    while(c != EOF) // EOF means end of file 
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}