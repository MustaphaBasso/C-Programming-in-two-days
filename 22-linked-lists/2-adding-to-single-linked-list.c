/* Adding to a single linked list */
#include <stdio.h>
#include <stdlib.h>

#ifndef NULL
#define NULL 0
#endif

/* Link Structure */
struct list
{
  int           ch;
  struct list   *next_rec;    /* using an int to hold a character */
};

typedef struct list LIST;
typedef LIST *LISTPTR;        /* Pointer to the structure list */
/*--------------------------*/

LISTPTR add_to_list(int, LISTPTR);
void show_list(LISTPTR);
void free_memory_list(LISTPTR);

int main(void)
{
  LISTPTR first = NULL;             /* head pointer */
  int i = 0;
  int ch;
  char trash[256];                  /* to clear stdin buffer */

  while (i++ < 5)                   /* build a list based on 5 items given */
  {
    ch = 0;
    printf("\nEnter character %d, ", i);

    do
    {
      printf("\nMust be a to z: ");
      ch = getc(stdin);           /* get next character in buffer */
      gets(trash);                /* remove trash from buffer */
    } while ((ch < 'a' || ch > 'z') && (ch < 'A' || ch >'Z'));

    first = add_to_list(ch, first);
  }

  show_list(first);
  free_memory_list(first);

  return(0);
}

/*==============================================
 * Function: add_to_list()
 * Inserts new link in the list
 * Returns address to head pointer (first)
 *==============================================*/

LISTPTR add_to_list(int ch, LISTPTR first)
{
  LISTPTR   new_rec = NULL;                   /* Holds address of new record */
  LISTPTR   tmp_rec = NULL;                   /* Holds tmp pointer */
  LISTPTR   prev_rec = NULL;

  new_rec = (LISTPTR)malloc(sizeof(LIST));    /* Get memory loc */

  if (!new_rec)
  {
    printf("\nUnable to allocate memory!\n");
    exit(1);
  }

  /* set new link's data */
  new_rec->ch = ch;
  new_rec->next_rec = NULL;

  if (first == NULL)                  /* adding first link to list */
  {
    first = new_rec;
    new_rec->next_rec = NULL;         /* redundant but safe */
  }
  else                                /* not first record */
  {
    /* see if it goes before the first link */
    if (new_rec->ch < first->ch)
    {
      new_rec->next_rec = first;
      first = new_rec;
    }
    else                      /* it is being added to the middle or end */
    {
      tmp_rec = first->next_rec;
      prev_rec = first;

      /* Check to see where link is added */

      if (tmp_rec == NULL)
      {
        /* We are adding second record to end */
        prev_rec->next_rec = new_rec;
      }
      else
      {
        /* Check to see if adding in middle */
        while ((tmp_rec->next_rec != NULL))
        {
          if (new_rec->ch < tmp_rec->ch)
          {
            new_rec->next_rec = tmp_rec;
            if (new_rec->next_rec != prev_rec->next_rec)
            {
              printf("ERROR");
              getc(stdin);
              exit(0);
            }
            prev_rec->next_rec = new_rec;
            break;                /* link is added, exit while */
          }
          else
          {
            tmp_rec = tmp_rec->next_rec;
            prev_rec = prev_rec->next_rec;
          }
        }

        /* check to see if adding to the end */
        if (tmp_rec->next_rec == NULL)
        {
          if (new_rec->ch < tmp_rec->ch)   /* one before end*/
          {
            new_rec->next_rec = tmp_rec;
            prev_rec->next_rec = new_rec;
          }
          else                            /* at the end */
          {
            tmp_rec->next_rec = new_rec;
            new_rec->next_rec = NULL;     /* redundant */
          }
        }
      }
    }
  }
return(first);
}

/*==============================================
 * Function: show_list()
 * Display the information current in the list
 *==============================================*/

void show_list(LISTPTR first)
{
  LISTPTR     cur_ptr;
  int         counter = 1;

  printf("\n\nRec addr  Position  Data  Next Rec addr\n");
  printf("========  ========  ====  =============\n");

  cur_ptr = first;
  while(cur_ptr != NULL)
  {
    printf("  %X  ", cur_ptr);
    printf("    %2i     %c", counter++, cur_ptr->ch);
    printf("    %X    \n", cur_ptr->next_rec);
    cur_ptr = cur_ptr->next_rec;
  }
}

/*==============================================
 * Function: free_memory_list()
 * Frees up all the memory allocated for list
 *==============================================*/

void free_memory_list(LISTPTR first)
{
  LISTPTR cur_ptr, next_rec;
  cur_ptr = first;                  /* Start at beginning */

  while (cur_ptr != NULL)           /* Go while not end of list */
  {
    next_rec = cur_ptr->next_rec;   /* Get address of next record */
    free(cur_ptr);                  /* free current record */
    cur_ptr = next_rec;             /* Adjust current*/
  }
}

