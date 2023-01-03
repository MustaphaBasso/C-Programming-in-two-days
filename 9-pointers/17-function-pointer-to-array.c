#include <stdio.h>
/* Declare and initialize an array */
int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

/* Declare function prototype which will return pointer to array */
static int (* const * volatile func_ptr_to_array)(void);

/* Declare and initialize a function which stores array address */
static int(* const func_array[])(void) = {array};

main()
{
  //  Initialize the function pointer to array
  func_ptr_to_array=*func_array;

  int i;
  printf("\n=======================================================");
  printf("=======================================");
  printf("\n\ti\tarray\tarray address\tfunc_ptr_to_array\tfunction_ptr_to_array address");
  printf("\n=======================================================");
  printf("=======================================");
  for (i=0; i<10; i++)
    /*printf("\n %d %d %d %d %d %d %d %d", array[i], &array[i], *func_array[i], func_array[i], &func_array[i], * func_ptr_to_array++, func_ptr_to_array, &func_ptr_to_array);*/
    
    printf("\n\t%d\t%d\t%d\t\t%d\t\t\t%d",i, array[i],&array[i],
     *func_ptr_to_array++, func_ptr_to_array);
}



