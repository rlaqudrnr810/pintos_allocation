#include <stdio.h>
#include <syscall.h>

int
main (int argc, char **argv)
{
  int i;
  printf("Hello pINTOS\n");
  for (i = 0; i < argc; i++)
    printf ("%s hello", argv[i]);
  printf ("\n");

  return EXIT_SUCCESS;
}