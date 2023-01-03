/* Accessing command line arguments. */

#include <stdio.h>

main(int argc, char *argv[])
{
  int count;

  printf("Program name: %s\n", argv[0]);

  if (argc > 1)
  {
    for (count = 1; count < argc; count++)
      printf("Argument %d: %s\n", count, argv[count]);
  }
  else
    puts("No command line arguments entered.");


}

/* Compile the program then invoke the executable with some */
/* arguments, example: */
/* ./1-command-line-args.exe first second "3 4" */
 