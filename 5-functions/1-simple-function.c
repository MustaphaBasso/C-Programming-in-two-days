/* How a Function Works: */
    /* Function Prototype */
    /* return_type function_name(arg-type name-1,...,arg-type name-n); */
/* Function Definition: */
    /* return_type function_name(arg-type name-1,...,arg-type name-n) */
    /* { */
    /*    statements; */
    /* } */

/* Demonstrates a simple function */
#include <stdio.h>

long cube(long x);

long input, answer;

main()
{
  printf("Enter an integer value: ");
  scanf("%d", &input);
  answer = cube(input);
  /* Note: %ld is the conversion specifier for */
  /* a long integer */
  printf("\nThe cube of %ld is %ld.", input, answer);

  return 0;
}

long cube(long x)
{
  long x_cubed;

  x_cubed = x * x * x;
  return x_cubed;
}
