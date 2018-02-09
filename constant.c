#include <stdio.h>
#define PI 3.14 
/*
define symbolic constant
*/
int main(int argc, char *argv[])
{
    float R = 5;
    float area;

    area = PI * R * R;

    printf("%f\n", area);

    return 0;
}