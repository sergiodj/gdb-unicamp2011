/* points.c -- Exemplo para break e watchpoints.  */

#include <stdio.h>

int
teste (int n)
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

  a = 5;
  b = teste (a) / 10;

  for (i = 0; i < 10; i++)
    a += teste(i);

  return 0;
}
