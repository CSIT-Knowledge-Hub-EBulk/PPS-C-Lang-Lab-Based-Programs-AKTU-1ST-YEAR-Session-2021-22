/*Write the following C program using pointer: 
a) To sort the list of numbers through pointer 
b) To reverse the string through pointer. 
*/
//To sort the list of numbers through pointer
#include <stdio.h>

int main (void)
{
     int ar[20];
     int no_of_elements;
     int key;
     int i, j;

     //Input no of elements
     printf ("Input number of elements: ");
     scanf ("%d", &no_of_elements);

     //Input array
     printf ("Input elements: ");
     for (i = 0; i <= no_of_elements - 1; i++)
          scanf ("%d", &ar[i]);

     //Print Array
     printf ("Array: ");
     for (i = 0; i <= no_of_elements - 1; i++)
          printf ("%d ", ar[i]);

     //Sorting
     for (i = 1; i <= no_of_elements - 1; i++)
     {
          key = *(ar + i);
          for (j = i - 1; j >= 0 && *(ar + j) > key; j--)
               *(ar + j + 1) = *(ar + j);
          *(ar + j + 1) = key;
     }

     //Print Array after sorting
     printf ("\nSorted Array: ");
     for (i = 0; i <= no_of_elements - 1; i++)
          printf ("%d ", ar[i]);

     return 0;
};
