/* Demonstrates using the gets() return value. */

#include <stdio.h>

/* Declare a character array to hold input, and a pointer. */

char input[8], *ptr;

main()
{
  /* Display instructions */

  puts("Enter text a line at a time, then press Enter.");
  puts("Enter a blank line when done.");

  /* Loop as long as input is not blank */

  while ( *(ptr = gets(input)) != NULL )
    printf("You entered %s\n", input);

  puts("Thank you and good-bye");

  return 0;
}
