/* This program types out a file.  It displays */
/* hexadecimal equivalent of each character. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argv, char *argc[])
{
  int ch;
  unsigned int line = 1;

  FILE *fp;

  if (argv != 2)
  {
    printf("\n\nOops!  Proper usage is:");
    printf("\n\n%s in_file ", argc[0]);
    printf("\n\nOriginal file will be printed in decimal");
    return(1);
  }

  /*** Open the file ***/
  if ((fp = fopen(argc[1], "r")) == NULL)
  {
    printf("\n\nOops!  Error in opening file: %s\n\n", argc[1]);
    exit(99);
  }

  printf("\nFile %s opened successfully ", argc[1]);
  printf("\n%5.5d:   ", line);

  while ((ch = fgetc(fp)) != EOF)
  {

    printf("%x ", ch);

    if (ch == '\n')
    {
      line++;
      printf("\n%5.5d: ", line);

    }    
  }
  fclose(fp);
  return (0);
}

/* Test the program by running this command after successful compilation: */
/* ./3-program-type-in-hexadecimal.exe 3-program-type-in-hexadecimal.c */