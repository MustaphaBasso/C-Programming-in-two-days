/* Illustrates the modulus operator. */
/* Inputs a number of seconds, and converts to hours, */
/* minutes, and seconds. */

#include <stdio.h>

/* Define constants */

#define SECS_PER_MIN 60
#define SECS__PER_HOUR 3600

unsigned seconds, minutes, hours, secs_left, mins_left;

main()
{
  /* Input the number of seconds */

  printf("Enter the number of seconds (< 65000): ");
  scanf("%d", &seconds);

  hours = seconds / SECS__PER_HOUR;
  minutes = seconds / SECS_PER_MIN;
  mins_left = minutes % SECS_PER_MIN;
  secs_left = seconds % SECS_PER_MIN;

  printf("%u seconds is equal to ", seconds);
  printf("%u h, %u m, and %u s", hours, mins_left, secs_left);
}
