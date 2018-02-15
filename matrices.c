#include <stdio.h>

int main(int argc, char *argv[])
{
  int mat[2][2];
  mat [0][0] = 1;
  mat [0][1] = 2;
  mat [1][0] = 3;
  mat [1][1] = 4;

/*
i = extern for
j = intern for
*/

int i, j;
for(i = 0; i < 2; i++)
{
    for (j = 0; j < 2; j++)
    {
      printf("%d\t", mat[i][j]);
    }
      printf("\n");
}
  return 0;
}
