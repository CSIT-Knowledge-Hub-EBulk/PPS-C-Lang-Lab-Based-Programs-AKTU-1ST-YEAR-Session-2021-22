//Write a function that return sum of all the odd digits of a given positive no entered through keyboard. 
#include<stdio.h>

// function for add digits

int Add_odd(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        if(r%2!=0)
         sum=sum+r;
        n=n/10;
    }
    return sum;
}

//Driver function
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("Sum of all the odd digits is: %d",Add_odd(n));
    return 0;
}
