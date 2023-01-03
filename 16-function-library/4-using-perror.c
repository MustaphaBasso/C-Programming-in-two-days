/* Demonstration of error handling with perror() and errno. */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

main()
{
  FILE *fp;
  char filename[80];

  printf("Enter filename: ");
  gets(filename);

  if ( fp = fopen(filename, "r") == NULL)
  {
    perror("You goofed!");
    printf("errno = %d.", errno);
    exit(1);
  }
  else
  {
    puts("File opened for reading.");
    fclose(fp);
  }
}

