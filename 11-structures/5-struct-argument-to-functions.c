/* Demonstrates passing a structure to a function */

#include <stdio.h>

struct data{
  float amount;
  char fname[30];
  char lname[30];
} rec;

/* The function prototype.  The function has no return value, */
/* and it takes a structure of type data as its one argument */

void print_rec(struct data x);

main()
{
  /* Input the data from the keyboard. */

  printf("Enter the donor's first name and last name, \n");
  printf("separated by spaces: ");
  scanf("%s %s", rec.fname, rec.lname);

  printf("\nEnter the donation amount: ");
  scanf("%f", &rec.amount);

  print_rec( rec );

  return 0;
}

void print_rec(struct data x)
{
  printf("\nDonor %s %s gave $%.2f.", x.fname, x.lname, x.amount);
}
