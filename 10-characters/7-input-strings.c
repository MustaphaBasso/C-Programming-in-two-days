/* Demonstrates using the gets() library function */

#include <stdio.h>

/* Allocate character array to hold input. */

char input[81];

main()
{
  puts("Enter some text, then press Enter ");
  gets(input);
  printf("You entered %s", input);

  return 0;
}
