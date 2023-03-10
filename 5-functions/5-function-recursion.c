/* Demonstrates function recursion.  Calculates the */
/* factorial of a number */

#include <stdio.h>

unsigned int f, x;
unsigned int factorial(unsigned int a);

void main()
{
  puts("Enter an integer value between 1 and 8: ");
  scanf("%d", &x);

  if (x > 8 || x < 1)
  {
    printf("Only values between 1 and 8 are acceptable!");
  }
  else
  {
    f = factorial(x);
    printf("%u factorial equals %u", x, f);
  }
}


unsigned int factorial(unsigned int a)
{
  if ( a == 1)
    return 1;
  else
  {
    a *=factorial(a-1);
    return a;
  }
}
