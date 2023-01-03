/* A variable is a named data storage location in computer memory. */
/* The name can contain letters, digits, and the underscore character. */
/* The first character of the name must be letter. */
/* Case matters. */
/* C keywords cannot be used as variable name. */
/* Memory is measured in bytes. */
/* Each byte consists of 8 bits. */
/* A bit is a binary digit with value of either 1 or 0. */

/* SIZEOF.C -- Program to tell the size of the C variable */
/* in bytes. */

#include <stdio.h>

main()
{
  printf("\nA char               is %d bytes", sizeof( char ));
  printf("\nAn int               is %d bytes", sizeof(int));
  printf("\nA short              is %d bytes", sizeof(short));
  printf("\nA long               is %d bytes", sizeof(long));
  printf("\nAn unsigned char     is %d bytes", sizeof(unsigned char));
  printf("\nAn unsigned int      is %d bytes", sizeof(unsigned int));
  printf("\nAn unsigned short    is %d bytes", sizeof(unsigned short));
  printf("\nA float              is %d bytes", sizeof(float));
  printf("\nA double             is %d bytes", sizeof(double));
}
