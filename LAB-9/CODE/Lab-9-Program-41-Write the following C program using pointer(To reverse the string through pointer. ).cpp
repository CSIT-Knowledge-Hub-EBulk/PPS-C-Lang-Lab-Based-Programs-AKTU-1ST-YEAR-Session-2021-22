/*Write the following C program using pointer: 
a) To sort the list of numbers through pointer 
b) To reverse the string through pointer. 
*/
//To reverse the string through pointer. 
#include <stdio.h>

int main (void)
{
     char str[20];
     int length;
     char temp;
     int i, j;

     //Input string
     printf ("Input string: ");
     fflush (stdin);
     scanf ("%s", str);
     //fgets(str, 20, stdin);

     //Calculate string length
     length = 0;
     while (*(str + length) != '\0')
          length++;

     //Reverse string
     for (i = 0; i <= length / 2 - 1; i++)
     {
          temp = *(str + i);
          *(str + i) = *(str + length - 1 - i);
          *(str + length - 1 - i) = temp;
     }

     //Print reverse string
     printf ("Reverse String: ");
     puts (str);

     return 0;
};
