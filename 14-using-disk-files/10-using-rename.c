/* Using rename to change a filename. */

#include <stdio.h>

main()
{
  char oldname[80], newname[80];

  printf("Enter current filename: ");
  gets(oldname);
  printf("Enter new name for file: ");
  gets(newname);

  if(rename(oldname, newname ) == 0)
    printf("%s has been renamed %s", oldname, newname);
  else
    fprintf(stderr, "An error has occured renaming %s", oldname);
    
}
