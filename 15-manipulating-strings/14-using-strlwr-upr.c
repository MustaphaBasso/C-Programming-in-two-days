/* The character conversion functions strlwr() and strupr(). */

#include <stdio.h>
#include <string.h>

main()
{
  char buf[80];

  while (1)
  {
    puts("Enter a line of text, a blank to exit.");
    gets(buf);

    if (strlen(buf) == 0)
      break;

    puts(strlwr(buf));
    puts(strupr(buf));
  }
}
