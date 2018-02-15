#include <stdio.h>
/*
In this exercise, the function only changes the temporary variable (40), but does not change the main variable (30).
*/
void f(int num)
{
  num = 30;
}

int main() {

  int num = 40;

  f(num);

  printf("%d\n", num);
  return 0;
}
