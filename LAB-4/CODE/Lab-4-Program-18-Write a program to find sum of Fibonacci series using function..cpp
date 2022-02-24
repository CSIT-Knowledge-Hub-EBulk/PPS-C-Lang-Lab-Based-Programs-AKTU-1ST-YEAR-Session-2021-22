//Write a program to find sum of Fibonacci series using function.
#include<stdio.h>
  int fib(int n)
  {
    if(n==1||n==2)
     return 1;
    return (fib(n-1)+fib(n-2));
  }
  int main()
  {
     int n,i,sum=0;
     printf("Enter number of term in fibbo series\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        sum=sum+fib(i);
     }
     printf("Sum of the series is: %d",sum);
     return 0;
  }
