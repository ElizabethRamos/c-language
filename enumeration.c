#include <stdio.h>

enum colors{Red, blue, yellow, white, black};

int main()
{
    enum colors color;

    color = Red;

    printf("%d\n", color);

    if(color == Red)
        printf("Red color\n");
    else
        printf("Color is not red");

    return 0;
}