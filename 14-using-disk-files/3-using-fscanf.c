/* Reading formatted file data with fscanf() */
#include <stdlib.h>
#include <stdio.h>

main()
{
  float f1, f2, f3, f4, f5;
  FILE *fp;

  if ((fp = fopen("INPUT.TXT", "r")) == NULL)
  {
    fprintf(stderr, "Error opening file.");
    exit(1);
  }

  fscanf(fp, "%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);
  printf("The values are %f %f %f %f %f", f1, f2, f3, f4, f5);

  fclose(fp);
}
