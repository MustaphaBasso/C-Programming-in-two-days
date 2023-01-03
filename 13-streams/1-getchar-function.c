/* Demonstrates the getchar() function */

#include <stdio.h>

main()
{
  int ch;

  while ((ch = getchar()) != '\n')
    putchar(ch);
}
