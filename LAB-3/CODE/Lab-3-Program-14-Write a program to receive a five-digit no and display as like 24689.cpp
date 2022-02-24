/*Write a program to receive a five-digit no and display as like 24689: 
2 
4 
6 
8 
9*/
#include<stdio.h>

int main()
{
    int n,r,rev=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    // finding reverse
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    
    // printing of number
    while(rev!=0)
    {
        r=rev%10;
        rev=rev/10;
        printf("%d\n",r);
    }
    return 0;
}
