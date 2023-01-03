/* Demonstrates the time function */
#include <stdio.h>
#include <time.h>

main()
{
  time_t start, finish, now;
  struct tm *ptr;
  char *c, buf1[80];
  double duration;

  /* Record the time the program starts execution */

  start = time(0);

  /* Record the current time, using the alternate method */
  /* calling time(). */

  time(&now);

  /* Convert the time_t value into a type tm structure. */

  ptr = localtime(&now);

  /* Convert and display a formatted string containing */
  /* the current time */

  c = asctime(ptr);
  puts(c);
  getchar();

  /* Now use the strftime() function to create several different */
  /* formatted versions of the time. */

  strftime(buf1, 80, "This is week %U of the year %Y", ptr);
  puts(buf1);
  getchar();

  strftime(buf1, 80, "Today is %A, %x", ptr);
  puts(buf1);
  getchar();

  strftime(buf1, 80, "Its is %M minutes past hour %I.", ptr);
  puts(buf1);
  getchar();

  /* Now get the current time and calculate program duration. */

  finish = time(0);
  duration = difftime(finish, start);
  printf("\nProgram execution time = %f seconds.", duration);

  /* Also display program duration in hundredths of seconds */
  /* using clock(). */

  printf("\nProgram execution time = %ld hundredths of sec.", clock());
}

