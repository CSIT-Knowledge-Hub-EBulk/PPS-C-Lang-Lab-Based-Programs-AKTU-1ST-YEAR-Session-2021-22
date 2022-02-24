/*Write a program to take 10 integers from file and write square of these 
integer in other file. */
#include <stdio.h>

int main (void)
{
     FILE *f_ptr_1, *f_ptr_2;
     char path_1[256], path_2[256];
     int num;
     int i;

     //Input first file path
     printf ("Input first file path: ");
     fflush (stdin);
     scanf ("%s", path_1);

     //Open first file
     f_ptr_1 = fopen (path_1, "r");
     if (f_ptr_1 == NULL)
     {
          printf ("Error! Unable to open first file.");
          return 0;
     }

     //Input second file path
     printf ("Input second file path: ");
     fflush (stdin);
     scanf ("%s", path_2);

     //Open second file
     f_ptr_2 = fopen (path_2, "w");
     if (f_ptr_2 == NULL)
     {
          printf ("Error! Unable to open second file.");
          return 0;
     }

     //Read integer from first file and write square in second file
     for (i = 0; i <= 9; i++)
     {
          if (fscanf (f_ptr_1, "%d", &num) != EOF)
               fprintf (f_ptr_2, "%d ", num * num);
          else
               break;
     }

     //Close files
     fclose (f_ptr_1);
     fclose (f_ptr_2);
     printf ("File Saved Successfully.");

     return 0;
};
