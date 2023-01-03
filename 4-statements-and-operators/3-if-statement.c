/* Demonstrates the use of if statements */

#include <stdio.h>

int x, y;

main()
{
  /* Input the two values to be tested */

  printf("\nInput an integer value for x: ");
  scanf("%d", &x);
  printf("\nEnter an integer value for y: ");
  scanf("%d", &y);

  /* Test values and print result */

  if (x == y)
    printf("x is equal to y");

  if (x > y)
    printf("x is greater than y");

  if (x < y)
    printf("x is less than y");

  return 0;
}
