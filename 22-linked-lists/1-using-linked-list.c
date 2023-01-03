/* Demonstrates the relations in a linked list. */
/* Program assumes malloc() is successful. */
/* Do not make this assumption */

#include <stdio.h>
#include <stdlib.h>

#define NULL 0

struct link                   /* a structure to use in a link list */
{
  char    ch;                 /* link structure data element(s) */
  struct  link *next;         /* pointer to next link structure */
};

typedef struct link LINK;

typedef LINK *LINK_PTR;

int main(void)
{
  LINK_PTR first;             /* same as a head pointer */

  /* Create first link */
  first = (LINK_PTR) malloc(sizeof(LINK));

  /* put data into first link */
  first->ch = 'a';
  /* create a new link: put pointer to it in the first link */
  first->next = (LINK_PTR) malloc(sizeof(LINK));

  /* repeat the process */
  first->next->ch = 'b';
  first->next->next = (LINK_PTR) malloc(sizeof(LINK));
  first->next->next->ch = 'c';
  /* Don't want another link, so next pointer is NULL */
  first->next->next->next = NULL;

  /* Print data from links. */
  printf("\n\nPrint the character values...");

  printf("\n\nValues from the first link:");
  printf("\n   ch is %c", first->ch);
  printf("\n   next is %d", first->next);

  printf("\n\nValues from the second link:");
  printf("\n   ch is %c", first->next->ch);
  printf("\n   next is %d", first->next->next);

  printf("\n\nValues from the third link:");
  printf("\n   ch is %c", first->next->next->ch);
  printf("\n   next is %d", first->next->next->next);

  free(first->next->next);
  free(first->next);
  free(first);
}

