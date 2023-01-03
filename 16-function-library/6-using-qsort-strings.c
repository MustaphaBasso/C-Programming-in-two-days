/* Using qsort() and bsearch() with strings. */
#include <stdio.h>
#include <stdlib.h>

#define MAX 20

int comp(const void *s1, const void *s2);

main()
{
  char *data[MAX], buf[80], *key, **key1, *ptr;
  int count;
  /* Input a list of words. */

  printf("Enter %d words, press Enter after each.\n", MAX);

  for (count = 0; count < MAX; count++)
  {
    printf("Word %d: ", count+1);
    gets(buf);
    data[count] = malloc(strlen(buf) + 1);
    strcpy(data[count], buf);
  }
 

    /* Sort the words (actually, sort the pointers). */

    qsort(data, MAX,sizeof(data[0]), comp);

    /* Display the sorted data. */

    for( count = 0; count < MAX; count++ )
      printf("\n%d: %s", count+1, data[count]);

    /* Get a search key. */

    printf("Enter a search key: ");
    gets(buf);

    /* Perform the search.  first make key1 a pointer */
    /* to the pointer to the search key. */

    key = buf;
    key1 = &key;
    ptr = bsearch(key1, data, MAX, sizeof(data[0]), comp);

    if( ptr != NULL)
      printf("%s found.", buf);
    else  
      printf("%s not found.", buf);
}

int comp(const void *s1, const void *s2)
{
  return (strcmp(*(char **)s1, *(char **)s2));
}

