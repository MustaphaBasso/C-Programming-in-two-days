/* Demonstrates calloc(). */

#include <stdio.h>
#include <stdlib.h>

main()
{
  unsigned num;
  int *ptr;

  printf("Enter the number of type int to allocate: ");
  scanf("%d", &num);

  ptr = (int*)calloc(num, sizeof(int));

  if (ptr != NULL)
    puts("Memory allocation was successful.");
  else
    puts("Memory allocation failed.");
}

