/* Demonstrates printing extended ASCII characters */

#include <stdio.h>

unsigned char x;    /* Must be unsigned for extended ASCII */

main()
{
  /* Print extended ASCII characters 180 through 203 */

  for (x = 0; x < 255; x++ )
  {
    printf("\nASCII code %d is character %c", x, x);
  }
  printf("\nASCII code %d is character %c", x, x);
  return 0;
}
