/* Demonstrates pointers and multidimensional arrays */

#include <stdio.h>

int multi[2][4];

main()
{
  printf("\nmulti = %u", multi);
  printf("\nmulti[0] = %u", multi[0]);
  printf("\n&multi[0][0] = %u", &multi[0][0]);
}
