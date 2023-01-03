/* Demonstrates unary operator prefix and postfix modes. */

#include <stdio.h>

int a, b;

main()
{
  /* Set a and b both equal to 5 */

  a = b = 5;

  /* Display them, decrementing each time */
  /* Use prefix mode for b, postfix for a */
  printf("\n%d  %d", a--, --b);
  printf("\n%d  %d", a--, --b);
  printf("\n%d  %d", a--, --b);
  printf("\n%d  %d", a--, --b);
  printf("\n%d  %d", a--, --b);

  return 0;
}
