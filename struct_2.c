#include <stdio.h>

struct ponto
{
  /*
  membros da estrutura
  */
  char name[20];
  int x, y;

  struct ponto_filho
  {
    int z;
  };
  struct ponto_filho p_filho;
};

void mostrar_struct(struct ponto * p)
{
  /*
  recebe o ponteiro e printa o conteudo da variavel que ele aponta
  */
  printf("%s\n", (*p).name);
}

int main()
{
  /*
  p = nome da estrutura
  */
  struct ponto p = {"Eliza", 29};
  /*
  ponteiro que aponta para a variavel p
  */
  struct ponto * pp;

  pp = &p;

  p.p_filho.z = 30;

  printf("%s %d %d\n", p.name, p.x, p.p_filho.z);
  mostrar_struct(pp);

  return 0;
}
