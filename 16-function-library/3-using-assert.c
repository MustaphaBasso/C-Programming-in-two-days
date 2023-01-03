/* The assert() macro. */
/* Run the program with #define NDEBUG commented out */
/* if you enter a 0 when you're prompted, the program fails */ 
/* because of assert(). */
/* Run the program again with #define NDEBUG.  The program */
/* executes even if you enter 0 at the prompt. */
/* #define NDEBUG */
#include <stdio.h>
#include <assert.h>

main()
{
  int x;

  printf("\nEnter an integer value: ");
  scanf("%d", &x);

  assert(x);

  printf("You entered %d.", x);
}

