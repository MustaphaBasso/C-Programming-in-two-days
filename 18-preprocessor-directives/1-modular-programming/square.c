/* Input a number and display its square */

#include <stdio.h>
#include "calc.h"

main()
{
  int x;

  printf("Enter an integer value: ");
  scanf("%d", &x);

  printf("\nThe square of %d is %ld.", x, sqr(x));
}

/* Compiling this code requires linking the various source files */
/* making up this modular program, i.e square.c and calc.c */
/* Depending on your compiler you'd invoke it at the command line */
/* in order to create an executable object file */
/* (consult your compiler documentation). */
/* Example: for gnu compiler, you'd issue the following command */
/* gcc square.c calc.c -o square.exe. */
/* After successful compilation, you'd run the program by */
/* invoking square.exe at the command line, example: ./square.exe */ 
/* This is a simple modular program consisting of two modules only. */
/* For larger programs with multiple source files, you'd use */
/* the make utility to simplify the task.  This utility which is */
/* called NMAKE.EXE, enables you to write a so-called make file that */
/* defines the dependencies between your various components. */

