/* searching using strspn() */

#include <stdio.h>
#include <string.h>

main()
{
  char buf1[80], buf2[80];
  unsigned int loc;

  /* Input the strings. */

  printf("Enter the string to be searched: ");
  gets(buf1);
  printf("Enter the string containing the target characters: ");
  gets(buf2);

  loc = strspn(buf1, buf2);

  if (loc == 0)
    printf("No match was found.");
  else  
    printf("Characters match up to position %d.", loc-1);

  return 0;
}