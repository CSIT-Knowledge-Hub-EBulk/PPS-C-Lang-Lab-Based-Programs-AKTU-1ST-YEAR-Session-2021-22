//Write a program to print out all the Armstrong number between 100 and 500. 
// USING FUNCTION
#include<stdio.h>
#include<conio.h>

//  function for check Armstrong

int checkArm(int n)
{
    int n1,n2,r,s=1,sum=0; //r=reminder
    n1=n;
    n2=n;
    while(n!=0)
     {
          r=n%10;
          n=n/10;
          while(n1!=0)
           {
                s=s*r;
                 n1=n1/10;
            }
           sum=sum+s;
            s=1;
            n1=n2;
     }
    if(sum==n2)
       return 1;
    else
       return 0;

}

// Driver function
int main()
{
    int i,a;
    for(i=100;i<=500;i++)
    {
        a=checkArm(i);
        if(a==1)
          printf("%d ",i);
    }
    return 0;
}

