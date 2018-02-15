#include <stdio.h>
/*
In this exercise, the function changes the first vetor element.
*/
void f(vet[])
{
  vet[0] = 100;
}

int main() {
  int vet[] = {1, 2, 3, 4};

  f(vet);

  printf("%d\n", vet[0]);
  return 0;
}
