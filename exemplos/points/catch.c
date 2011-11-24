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

void
outro_teste (const char *p)
{
  chdir (p);
}

int
main (int argc, char **argv)
{
  int a;

  teste ();

  outro_teste (".");

  return 0;
}
