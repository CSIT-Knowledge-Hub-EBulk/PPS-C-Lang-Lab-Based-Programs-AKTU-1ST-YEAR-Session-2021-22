//Write factorial function & use the function to find the sum of series S=1!+2!+-----n!. 
#include <stdio.h>

int factorial (int);

int main (void)
{
    int terms;
    int sum;
    int i;
    
    //Input number of terms
    printf ("Input number of terms: ");
    scanf ("%d", &terms);
    
    //Calculate sum of series
    sum = 0;
    for (i = 1; i <= terms; i++)
        sum = sum + factorial (i);
    
    //Print result
    printf ("Sum of Series (S = 1! + 2! ... + %d!): %d", terms, sum);
    
    return 0;
};

int factorial (int num)
{
    int fact;
    int i;
    
    //Calculate factorial
    fact = 1;
    for (i = 1; i <= num; i++)
        fact = fact * i;
    
    //Return factorial
    return fact;
};
