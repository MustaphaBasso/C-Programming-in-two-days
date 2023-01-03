/* Translate decimal to hexadecimal and octal */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int nbr;

  printf("\n\nEnter a number ==> ");
  scanf("%d", &nbr);

  printf("\n\nYour number:            %d", nbr);
  printf("\nOctal value:            %o", nbr);
  printf("\nHexadecimal value:      %x", nbr);

}

