//Write a program to evaluate the addition of diagonal elements of two square matrixes. 
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,n1,n2,sum1=0,sum2=0;
    printf("Enter size of both array\n");
    scanf("%d%d",&n1,&n2);
    printf("Enter elements of the first matrix\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
          scanf("%d",&a[i][j]);
    }
     printf("Enter elements of the second matrix\n");
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n2;j++)
          scanf("%d",&b[i][j]);
    }
    
    // logic for calculating sum of digonal of first matrix
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(j==i)
              sum1=sum1+a[i][j];
        }
    }
    
    
    // logic for calculating sum of digonal of second matrix
    for(i=0;i<n2;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(j==i)
              sum2=sum2+b[i][j];
        }
    }
    
    printf("Sum of digonal elements of the first matrix is: %d\n",sum1);
    printf("Sum of digonal elements of the second matrix is: %d\n",sum2);
    printf("Total Sum of digonal elements of the both matrix is: %d",sum1+sum2);
    return 0;
}

