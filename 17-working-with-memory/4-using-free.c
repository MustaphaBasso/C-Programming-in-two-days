/* Using the free() function to release allocated dynamic memory. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BLOCKSIZE 30000

main()
{
  void *ptr1, *ptr2;

  /* Allocate one block */

  ptr1 = malloc(BLOCKSIZE);

  if (ptr1 != NULL)
    printf("\nFirst allocation of %d bytes successful.", BLOCKSIZE);
  else
  {
    printf("\nAttempt to allocate %d bytes failed.", BLOCKSIZE);
    exit(1);
  }

  /* Try to allocate another block */

  ptr2 = malloc(BLOCKSIZE);

  if (ptr2 != NULL)
  {
    /* If allocation is successful. print message and exit. */
    printf("\nSecond allocation of %d bytes successful.", BLOCKSIZE);
    exit(0);
  }

  /* If not successful, free the first block and try again. */

  printf("\nSecond attempt to allocate %d bytes failed.", BLOCKSIZE);
  free(ptr1);
  printf("\nFreeing first block.");

  ptr2 = malloc(BLOCKSIZE);

  if (ptr2 != NULL)
    printf("\nAfter free(), allocation of %d bytes successful.", BLOCKSIZE);
}

