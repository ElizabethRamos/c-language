#include <stdio.h>

int main(int argc, char *argv[])
{
    int time = 1;

    while(time <= 50)

    {
        printf("%d - I'm training while tips and still printing this message, please be patient :) \n", time++);
            if(time == 25)
            printf("YAY, ALMOST THERE...\n");
    }

    return 0;
}