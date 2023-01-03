/* Demonstration of declaring and using a pointer to a function */

#include <stdio.h>

/* The function prototype */

float square(float x);

/* The pointer declaration */

float (*p)(float);

main()
{
  /* Initialize p to point to square() */

  p = square;

  /* call square() two ways */

  printf("%f %f", square(6.6), p(6.6));

  return 0;
}

float square(float x)
{
  return x*x;
}
