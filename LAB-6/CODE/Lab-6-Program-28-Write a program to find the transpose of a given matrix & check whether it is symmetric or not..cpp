//Write a program to find the transpose of a given matrix & check whether it is symmetric or not. 
#include<stdio.h>
int main()
{
    int a[10][10],t[10][10],i,j,flag=0;
    int r,c;
    printf("Enter the number of row and column of the matrix\n");
    scanf("%d%d",&r,&c);
    printf("Enter the element of the  matrix\n");
    // Input matrix a[][]
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
          scanf("%d",&a[i][j]);
    }
    
    // logic for compute transpose
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            t[i][j]=a[j][i];
        }
    }
    
    // Display the transpose
    printf("the transpose is:-\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
          printf("%d ",t[i][j]);
        printf("\n");
    }
    
    //logic for checking matrix is symmetric or not
    if(r!=c)
      printf("Matrix is not symmetric\n");
    else
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(t[i][j]!=a[i][j]);
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
              break;
            
        }
        if(flag==0)
          printf("Matrix is symmetric Matrix\n");
        else
         printf("Matrix is not a symmetric Matrix\n");
    }
    return 0;
}
