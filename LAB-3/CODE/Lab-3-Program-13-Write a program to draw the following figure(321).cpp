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
    int i,j,x;
    for(i=3;i>=1;i--)
    {
        x=i;
        for(j=1;j<=i;j++)
        {
            printf("%d",x);
            x--;
        }
        printf("\n");
    }
    return 0;
}
