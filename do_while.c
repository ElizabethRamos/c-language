#include <stdio.h>
/*
Using the comand for, to repear some phrase.
*/
int main(int argc, char *argv[])
{
    int time = 1;
    
    do
    {
        printf("%d - Still training...\n", time);
        time++;

    }while(time <=50);

    return 0;
}