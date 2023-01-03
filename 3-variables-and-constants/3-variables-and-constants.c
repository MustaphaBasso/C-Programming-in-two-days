/* Demonstrates variables and constants. */
#include <stdio.h>
/* Define a constant to convert from pounds to grams. */
#define GRAMS_PER_POUND 454
/* Define a constant for the start of next century, */
const int NEXT_CENTURY = 2100;
/* Declare the needed variables. */
long weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2100;

main()
{
  /* Input data from user. */

  printf("Enter the weight in pounds: ");
  scanf("%d", &weight_in_pounds);
  printf("Enter your year of birth: ");
  scanf("%d", &year_of_birth);

  /* Perform conversions. */

  weight_in_grams = weight_in_pounds*GRAMS_PER_POUND;
  age_in_2100 = NEXT_CENTURY - year_of_birth;

  /* Display results on the screen. */

  printf("\nYour weight in grams = %d", weight_in_grams);
  printf("\nIn 2100 you will be %d years old", age_in_2100);

  return 0;
}
