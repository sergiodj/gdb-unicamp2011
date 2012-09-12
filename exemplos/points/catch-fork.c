/* catch.c -- Exemplo para catchpoints,
   especificamente `fork' e `syscall'.  */

#include <stdio.h>
#include <unistd.h>

void
teste (void)
{
  if (fork () == 0)
    printf ("Filho\n");
}

int
main (int argc, char **argv)
{
  int a;

  teste ();

  return 0;
}
