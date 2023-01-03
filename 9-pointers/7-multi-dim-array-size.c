/* Demonstrates the sizes of multidimensional array elements */

#include <stdio.h>

int multi[2][4];

main()
{
  printf("\nThe size of multi = %u", sizeof(multi));
  printf("\nThe size of multi[0] = %u", sizeof(multi[0]));
  printf("\nThe size of multi[0][0] = %u", sizeof(multi[0][0]));
}
