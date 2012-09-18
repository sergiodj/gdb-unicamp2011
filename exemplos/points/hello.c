/* hello.c -- Exemplo contendo segmentation fault  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_SIZE 7

char **
make_array(int size)
{
  char **arr = malloc(size * sizeof(char *));
  int i;
  for(i = 0; i < size; i++) {
    if(i % 2 == 0) arr[i] = "hello";
    else arr[i] = " world!";
  }
  return arr;
}

void
print_array(char **arr, int arrSize)
{
  int i;
  for(i = 0; i <= arrSize; i++) {
    printf("Index %d = %s\n", i, arr[i]);
  }
}

int
main (int argc, char **argv)
{
  char **arr = make_array(ARR_SIZE);

  print_array(arr, ARR_SIZE);

  return 0;
}
