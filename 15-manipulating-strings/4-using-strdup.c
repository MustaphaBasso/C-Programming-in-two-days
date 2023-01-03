/* The strdup() function. */
#include <stdlib.h>
#include <stdio.h>
#include <string.H>

char source[] = "The source string.";

main()
{
  char *dest;

  if ((dest = strdup(source)) == NULL)
  {
    fprintf(stderr, "Error allocating memory.");
    exit(1);
  }

  printf("The destination = %s", dest);
}
