/*
Write a program to draw the following figure: 
3 2 1 
21 
1 
 * 
 ** 
*** 
*/
#include<stdio.h>

int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
