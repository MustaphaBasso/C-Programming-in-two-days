/* This program types out a file.  It displays */
/* binary equivalent of each character. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *char_to_binary(int);

int main(int argv, char *argc[])
{
  int ch,
      letter =0;
      char *tmp;
  unsigned int line = 1;

  FILE *fp;

  if (argv != 2)
  {
    printf("\n\nOops!  Proper usage is:");
    printf("\n\n%s in_file ", argc[0]);
    printf("\n\nOriginal file will be printed in decimal");
    return (1);
  }

  /*** Open the file ***/
  if ((fp = fopen(argc[1], "r")) == NULL)
  {
    printf("\n\nOops!  Error in opening file: %s\n\n", argc[1]);
    exit(99);
  }

  printf("\nFile %s opened successfully ", argc[1]);
  printf("\n%5.5d: ", line);

  while ((ch = fgetc(fp)) != EOF)
  {
    tmp = char_to_binary(ch);
    printf("%s ", tmp);
    free(tmp);

    if (ch == '\n')
    {
      line++;
      letter = 0;
      printf("\n%5.5d: ", line);
    }
    else if(++letter >= 7)             /* For formatting output */
      {
        printf("\n       ");
        letter = 0;
      }    
  }
  fclose(fp);
  return (0);
}

/* Test the program by running this command after successful compilation: */
/* ./2-program-type-in-decimal.exe 3-program-type-in-binary.c */

char *char_to_binary(int ch)
{
  int   ctr;
  char  *binary_string;
  int   bitstatus = 0;

  binary_string = (char*) malloc(9*sizeof(char));

  for(ctr = 0; ctr < 8; ctr++)
  {
    switch(ctr)
    {
    case 0:     bitstatus = ch & 128;
                break;
    case 1:
                bitstatus = ch & 64;
                break;
    case 2:
                bitstatus = ch & 32;
                break;
    case 3:
                bitstatus = ch & 16;
                break;
    case 4:
                bitstatus = ch & 8;
                break;
    case 5:
                bitstatus = ch & 4;
                break;
    case 6:
                bitstatus = ch & 2;
                break;
    case 7:
                bitstatus = ch & 1;
                break;
    }
    binary_string[ctr] = (bitstatus) ? '1' : '0';
  }
  binary_string[8] = 0;   /* Null Terminate */
  return(binary_string);
}

