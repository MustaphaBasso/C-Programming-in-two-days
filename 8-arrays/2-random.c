/* Demonstrates using multidimensional array */

#include <stdlib.h>
#include <stdio.h>

int random_array[10][10][10];
int a, b, c;

main()
{
  /* Fill the array with random numbers.  The C library */
  /* function rand() returns a random number.  Use one */
  /* for loop for each array subscript */

  for (a = 0; a < 10; a++)
  {
    for (b = 0; b < 10; b++)
    {
      for (c = 0; c < 10; c++)
      {
        random_array[a][b][c] = rand();
      }
    }
  }

  /* Now display the array elements 10 at a time */

  for (a = 0; a < 10; a++)
  {
    for (b = 0; b < 10; b++)
    {
      for (c = 0; c < 10; c++)
      {
        printf("\nrandom_array[%d][%d][%d] = ", a, b, c);
        printf("%d", random_array[a][b][c]);
      }
      printf("\nPress a key to continue, CTRL-C to quit.");
      getchar();
    }
  }
}   /* end of main() */
