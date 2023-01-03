/* Program to calculate the product of two numbers */

/* The #include directive.  stdio.h is is a library file supplied by the */
/* compiler.  it is a header file.  Header files always have extension .h. */
#include <stdio.h>

/* Declaration of global variables. */
int a, b, c;

/* The function prototype.  The prototype of a function must be declared */
/* before any calls made to it.  Its definition may follow after the */
/* prototype has been declared and it could also be anywhere after it's been */
/* called.*/
int product(int x, int y);

/* The main() function.  Every C program must have a main() */
/* function.  It is the entry point for the program execution. */

main(){
  /* Input the first number */
  /* Prompt the user for input. */
  printf("Enter a number between 1 and 100: ");
  /* capture the user input and store in declared variable(s). */
  scanf("%d", &a);

  /* Input the second number */
  printf("Enter another number between 1 and 100: ");
  scanf("%d", &b);

  /* Calculate the product by calling the product() function. */
  c = product(a,b);
  /* Display the result on the screen. */
  printf("\n%d times %d = %d", a, b, c);
  return 0;
}

/* Defintion of function product() which returns */
/* the product of its two arguments. */
int product(int x, int y)
{
  return(x * y);
}
