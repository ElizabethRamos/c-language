#include <stdio.h>
/*
construction of a function that returns the arithmetic mean of two numbers
*/
float media(float n1, float n2);

int main()
{
  float r;

  r = media(10, 20);
  printf("%f\n", r);

  return 0;
}

float media(float n1, float n2)
{
  float result = (n1 + n2) / 2;
  return result;
}
