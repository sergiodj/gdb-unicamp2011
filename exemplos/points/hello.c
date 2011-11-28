/* hello.c -- Exemplo contendo segmentation fault  */

#include <stdio.h>
#include <string.h>

int
imprimir(char *msg)
{
  printf("%s\n", msg);
  return 0;
}

int
hello(char *param)
{
  strcpy(param, "Hello World!");
  imprimir(param);
}

int
main (int argc, char **argv)
{
  char *str = "Ola Mundo!";

  hello(str);

  return 0;
}
