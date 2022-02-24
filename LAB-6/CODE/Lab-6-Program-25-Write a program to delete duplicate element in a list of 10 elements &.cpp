//Write a program to delete duplicate element in a list of 10 elements & display it on screen. 
#include<stdio.h>
int main()
{
    int a[10],b[10],i,j,k=0;
    printf("Enter 10 element of the list\n");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);
     
    // logic for deleting duplicates
    for(i=0;i<10;i++)
    {
        for(j=0;j<k;j++)
        {
            if(b[j]==a[i])
             break;
        }
        if(j==k)
        {
            b[k]=a[i];
            k++;
        }
    }
    printf("The ans is: ");
    for(i=0;i<k;i++)
      printf("%d ",b[i]);
    return 0;
}

