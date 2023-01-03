/* Demonstrates printer output. */

#include <stdio.h>

main()
{
  float f = 2.0134;

  fprintf(stdout, "\nnThis message is printed.\r\n");
  fprintf(stdout, "And now some numbers:\r\n");
  fprintf(stdout, "The square of %f is %f.", f, f*f);

  fprintf(stdout, "\f");
}
