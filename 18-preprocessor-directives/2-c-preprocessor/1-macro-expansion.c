/* The preprocessor is the first compiler component */
/* that processes your program. */
/* #define Preprocessor Directive: */
/* It has two uses: creating symbolic constants */
/* and creating macros. */
/* Symbolic constant example: */
/* #define text1 text2 */
/* This directive causes the preprocessor to go through the code file */
/* and replace every occurence of text1 with text2.*/

/* Creating function macros with #define */


#include <stdio.h>

#define OUT(x) printf(#x " is equal to %d.", x)

main()
{
  int value = 123;

  OUT(value);
}

