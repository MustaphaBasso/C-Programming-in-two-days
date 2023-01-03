/* Searching for a single character with strchr(). */

#include <stdio.h>
#include <string.h>

main()
{
  char *loc, buf[80];
  int ch;

  /* Input the string and the character. */

  printf("Enter the string to be searched: ");
  gets(buf);
  printf("Enter the character to search for: ");
  ch = getchar();

  loc = strchr(buf, ch);

  if (loc == NULL)
    printf("the character %c wan not found.", ch);
  else
    printf("The character %c was found at position %d.", ch, loc-buf);
}
