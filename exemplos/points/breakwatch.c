/* points.c -- Exemplo para break e watchpoints.  */

#include <stdio.h>

struct stteste
{
  int indice;
  char name[15];
  int value;
};

int
func_teste (int n)
{
  int r;

  r = n + 10;
  r += 20;

  return r;
}

int
main (int argc, char **argv)
{
  int a, b, i;
  struct stteste struct_exemplo[10];

  a = 5;
  b = func_teste (a) / 10;

  for (i = 0; i < 10; i++)
  {
    struct_exemplo[i].indice = i;
    sprintf(struct_exemplo[i].name, "elemento %i", i);
    struct_exemplo[i].value = func_teste(i);
  }

  return 0;
}
