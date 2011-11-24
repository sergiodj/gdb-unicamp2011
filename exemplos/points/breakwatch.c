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
  int a, b;

  a = 5;
  b = teste (a) / 10;

  return 0;
}
