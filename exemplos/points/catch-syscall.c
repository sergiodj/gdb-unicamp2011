/* Exemplo para `catch syscall'.  */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int
foo_a (void)
{
  char cwd[PATH_MAX];

  getcwd (cwd, PATH_MAX);
  return 1;
}

int
foo_b (void)
{
  return 2;
}

int
main (int argc, char *argv[])
{
  int a, b;

  a = foo_a ();

  chdir (".");

  b = foo_b ();

  return 0;
}
