/* Demonstrates passing a pointer to a multidimensional */
/* array to a function */

#include <stdio.h>

void printarray_1(int (*ptr)[4]);
void printarray_2(int (*ptr)[4], int n);

main()
{
  int multi[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
  /* ptr is a pointer to an array of 4 ints. */

  int (*ptr)[4], count;

  /* Set ptr to point to the first element of multi */

  ptr = multi;

  /* With each loop, ptr is incremented to point to the next */
  /* element (that is next 4-element integer array) of multi */

  for (count = 0; count < 3; count++)
    printarray_1(ptr++);

  puts("\nPress Enter..."); 
  
  int ch;

  while ((ch = getchar()) != '\n')
    putchar(ch);

  printarray_2(multi, 3);
}

void printarray_1(int (*ptr)[4])
{
  /* Prints the elements of a single 4-element integer array. */
  /* p is a pointer to type int.  You must use a type cast */
  /* to make p equal to the address in ptr. */

  int *p, count;

  p = (int *)ptr;

  for (count = 0; count < 4; count++)
    printf("\n%d", *p++);
}

void printarray_2(int (*ptr)[4], int n)
{
  /* Print the elements of an[] by 4 elements integer array */

  int *p, count;
  p = (int *)ptr;

  for (count = 0; count < (4*n);  count++)
    printf("\n%d", *p++);
}
