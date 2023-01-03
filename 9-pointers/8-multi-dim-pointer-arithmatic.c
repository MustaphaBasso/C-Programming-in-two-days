/* Demonstrates pointer arithmetic with pointers */
/* to multidimensional arrays */

#include <stdio.h>

int multi[2][4];

main()
{
  printf("\nThe value of (multi) = %u", multi);
  printf("\nThe value of (multi + 1) = %u", (multi+1));
  printf("\nThe address of multi[1] = %u", &multi[1]);
}
