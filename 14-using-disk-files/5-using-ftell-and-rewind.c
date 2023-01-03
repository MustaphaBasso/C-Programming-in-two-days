/* Demonstrate ftell() and rewind() */
#include <stdio.h>
#include <stdlib.h>

#define BUFLEN 6

char msg[] = "abcdefghijklmnopqrstuvwxyz";

main()
{
  FILE *fp;
  char buf[BUFLEN];

  if ((fp = fopen("TEXT.TXT", "w")) == NULL)
  {
    fprintf(stderr, "Error opening file.");
    exit(1);
  }

  if(fputs(msg, fp)  == EOF)
  {
    fprintf(stderr, "Error writing to file.");
    exit(1);
  }

  fclose(fp);

  /* Now open the file for reading. */

  if((fp =fopen("TEXT.TXT", "r")) == NULL)
  {
    fprintf(stderr, "Error opening file.");
    exit(1);
  }

  printf("\nImmediately after opening, position = %d", ftell(fp));

  /* Read in 5 characters. */

  fgets(buf, BUFLEN, fp);
  printf("\nAfter reading in %s, position = %d", buf, ftell(fp));

  /* Read in the next 5 characters */

  fgets(buf, BUFLEN, fp);
  printf("\n\nThe next 5 characters are %s, and position now = %d", buf, ftell(fp));

  /* Rewind the stream */

  rewind(fp);

  printf("\n\nAfter rewinding, the position is back at %d", ftell(fp));

  /* Read in 5 characters */

  fgets(buf, BUFLEN, fp);
  printf("\nand reading starts at the beginning again: %s", buf); 
}
