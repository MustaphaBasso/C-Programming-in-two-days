/* Demonstrates the remove() function. */

#include <stdio.h>

main()
{
  char filename[80];

  printf("Enter the filename to delete: ");
  gets(filename);

  if (remove(filename) == 0)
    printf("The file %s has been deleted.", filename);
  else
    fprintf(stderr, "Error deleting the file %s.", filename);
}
