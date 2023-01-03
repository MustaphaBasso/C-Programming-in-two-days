/* Demonstrates use of an array */

#include <stdio.h>

/* declare an array to hold expenses, and a counter variable */

float expenses[13];
int count;

main()
{
  /* Input data from keyboard into array */

  for (count = 1; count < 13; count++)
  {
    printf("Enter expenses for month %d: ", count);
    scanf("%f", &expenses[count]);
  }

  /* Print array contents */

  for (count = 1; count < 13; count++)
  {
    printf("\nMonth %d = $%.2f", count, expenses[count]);
  }
}
