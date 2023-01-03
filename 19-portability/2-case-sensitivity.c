/* This program demonstrates case sensitivity */

#include <stdio.h>

int main(void)
{
  int var1 = 1,
      var2 = 2;
  
  char  VAR1 = 'A',
        VAR2 = 'B';

  float Var1 = 3.3,
        Var2 = 4.4;

  int xyz =100,
      XYZ = 500;

  printf("\n\nPrint the values of the variables...\n");

  printf("\nThe integer values:     var1 = %d, var2 = %d", var1, var2);

  printf("\nThe character values:   VAR1 = %d, VAR2 = %d", VAR1, VAR2);

  printf("\nThe float values:       Var1 = %d, Var2 = %d", Var1, Var2);

  printf("\nThe other integers:     xyz = %d, XYZ = %d", xyz, XYZ);

  return 0;
}

