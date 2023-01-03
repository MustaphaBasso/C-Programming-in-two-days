/* Initializing an array of pointers to type char */

#include <stdio.h>

main()
{
  char *message[8] = { "Four", "score", "and", "seven", "years", "ago", "our", "forefathers"};

  int count;

  for (count = 0; count < 8; count++)
    printf("%s ", message[count]);
}
