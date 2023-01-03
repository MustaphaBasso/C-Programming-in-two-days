/* Using getchar() to input strings */

#include <stdio.h>

#define MAX 80

main()
{
  char ch, buffer[MAX+1];
  int x =0;

  while ((ch = getchar()) != '\n' && x < MAX)
    buffer[x++] = ch;

  buffer[x] = '\0';

  printf("%s", buffer);
}
