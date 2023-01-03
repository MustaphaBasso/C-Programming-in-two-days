/* Initializing an array of pointers to type char */

#include <stdio.h>

void print_strings(char *p[], int n);

main()
{
  char *message[8] = {"Four", "score", "and", "seven", "years", "ago", "our", "forefathers"};

  print_strings(message, 8);
}

void print_strings(char *p[], int n)
{
  int count;

  for (count = 0; count < n; count++)
    printf("%s ", p[count]);
}
