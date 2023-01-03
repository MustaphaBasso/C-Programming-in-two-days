/* Demonstrates local variables */

#include <stdio.h>

int x = 1, y = 2;

/* void is a type-name that returns nothing */
void demo(void);

main()
{
  printf("\nBefore calling demo(), x = %d and y = %d.", x, y);
  demo();
  printf("\nAfter calling demo(), x = %d and y = %d.", x, y);
}

void demo(void)
{
  /* Declares and initializes two local variables. */
  int x = 88, y = 99;

  /* Display their values. */
  printf("\nWithin demo(), x = %d and y = %d", x, y);
}
