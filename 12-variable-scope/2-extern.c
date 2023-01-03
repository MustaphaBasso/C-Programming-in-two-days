/* Illustrates declaring external variables */

#include <stdio.h>

int x = 999;

void print_value(void);

main()
{
  extern int x;
  printf("%d\n", x);
  print_value();
}

void print_value(void)
{
  extern int x;
  printf("%d", x);
}
