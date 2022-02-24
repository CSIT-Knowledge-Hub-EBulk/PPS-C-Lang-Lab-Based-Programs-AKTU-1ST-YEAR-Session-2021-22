/*Write a program to find the sum of following series 1-X1/1!+X2/2!- 
…………Xn/n!.*/
#include<stdio.h>
#include<math.h>

// function for finding factorial
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
      f=f*i;
    return f;
}

// driver function

int main()
{
    int n,sum=1,i,f,X,p;
    printf("Enter the value of X and n\n");
    scanf("%d%d",&X,&n);
    for(i=1;i<=n;i++)
    {
        f=fact(i);
        p=pow(X,i);
        if(i%2==0)
          sum=sum+(p/f);
        else
          sum=sum-(p/f);
    }
    printf("Sum of the series is: %d",sum);
    return 0; 
}
