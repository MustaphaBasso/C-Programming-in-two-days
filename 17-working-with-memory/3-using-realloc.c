/* Using realloc() to change memory allocation. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
  char buf[80], *message;

  /* Input a string */

  puts("Enter a line of text.");
  gets(buf);

  /* Allocate the initial block and copy the string to it. */

  message = realloc(NULL, strlen(buf) + 1);
  strcpy(message, buf);

  /* Display the message. */

  puts(message);

  /* get another line of text. */
  puts("Enter another line of text.");
  gets(buf);

  /* Increase the allocation, then concatenate the string to it. */
  strcat(message, buf);

  /* Display the new message. */

  puts(message);
}

