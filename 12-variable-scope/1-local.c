/* Illustrates variable scope. */

#include <stdio.h>

int x =0;

void print_value(void);

main()
{
  int x = 999;

  printf("\n%d", x);
  print_value();
}

void print_value(void)
{
  printf("\n%d\n", x);
}

