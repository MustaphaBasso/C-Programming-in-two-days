/* Demonstrate some math functions */

#include <stdio.h>
#include <math.h>

main()
{

  double x;

  printf("Enter a number: ");
  scanf("%lf", &x);

  printf("\nOriginal value: %lf", x);

  printf("\nCeil: %lf", ceil(x));
  printf("\nFloor: %lf", floor(x));
  if(x >= 0)
    printf("\nSquare root: %lf", sqrt(x));
  else  printf("\nNegative number");

  printf("\nCosine: %lf", cos(x));
}

