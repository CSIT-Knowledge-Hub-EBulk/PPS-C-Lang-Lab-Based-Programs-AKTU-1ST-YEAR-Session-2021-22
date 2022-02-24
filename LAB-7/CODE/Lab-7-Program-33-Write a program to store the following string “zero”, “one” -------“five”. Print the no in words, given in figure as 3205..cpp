//Write a program to store the following string “zero”, “one” -------“five”. Print the no in words, given in figure as 3205. 
#include <stdio.h>
#include <string.h>

char* num_to_word (int);
int main (void)
{
     int num = 0;
     int temp;
     int digit;
     char digit_in_word[100];
     char num_in_words[500];
     
     //Empty string
     num_in_words[0] = '\0';

     //Input number
     printf ("Input number: ");
     scanf ("%d", &num);

     //Convert number to word
     temp = num;
     do
     {
          digit = temp % 10;
          switch (digit)
          {
               case 0:
                    strcpy (digit_in_word, "Zero ");
                    break;
               case 1:
                    strcpy (digit_in_word, "One ");
                    break;
               case 2:
                    strcpy (digit_in_word, "Two ");
                    break;
               case 3:
                    strcpy (digit_in_word, "Three ");
                    break;
               case 4:
                    strcpy (digit_in_word, "Four ");
                    break;
               case 5:
                    strcpy (digit_in_word, "Five ");
                    break;
               case 6:
                    strcpy (digit_in_word, "Six ");
                    break;
               case 7:
                    strcpy (digit_in_word, "Seven ");
                    break;
               case 8:
                    strcpy (digit_in_word, "Eight ");
                    break;
               case 9:
                    strcpy (digit_in_word, "Nine ");
                    break;
          }
          strcat (digit_in_word, num_in_words);
          strcpy (num_in_words, digit_in_word);
          temp = temp / 10;
     }while (temp != 0);

     //Print number in words
     printf ("In words: %s", num_in_words);

     return 0;
};
