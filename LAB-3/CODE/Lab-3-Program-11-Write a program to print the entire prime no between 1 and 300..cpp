//Write a program to print the entire prime no between 1 and 300. 
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, max=300, i, flag;

    //create a for loop to run a counter from 1 to 300.

    for(num=1;num<=max;num++)
    {
        flag=0;
        //second for loop to check the number from 1 to 300 is prime or not.
        for(i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0 & num!=1) // we remove 1 from this condition
            printf("%d\t", num);
    }

}

