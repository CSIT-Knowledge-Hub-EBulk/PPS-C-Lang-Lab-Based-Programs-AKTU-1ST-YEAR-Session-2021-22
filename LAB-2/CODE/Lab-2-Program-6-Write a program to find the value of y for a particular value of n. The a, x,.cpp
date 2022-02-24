/*Write a program to find the value of y for a particular value of n. The a, x, 
b, n is input by user 
if n=1 y=ax%b 
if n=2 y=ax2+b2 
if n=3 y=a-bx 
if n=4 y=a+x/b */

#include<stdio.h>
#include<math.h>
int main()
{
    int a,x,b,n,y;
    printf("Enter the value of a,x,b,n\n");
    scanf("%d%d%d%d",&a,&x,&b,&n);
    if(n==1)
      y=(a*x)%b;
    if(n==2)
      y=(a*x*x)+(b*b);
    if(n==3)
      y=a-b*x;
    if(n==4)
      y=a+(x/b);
    printf("Value of the y is: %d",y);
    return 0;
}
