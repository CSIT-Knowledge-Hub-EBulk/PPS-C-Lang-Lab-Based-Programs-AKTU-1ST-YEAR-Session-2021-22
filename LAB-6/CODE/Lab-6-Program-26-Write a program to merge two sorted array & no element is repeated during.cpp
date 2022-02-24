//Write a program to merge two sorted array & no element is repeated during merging. 
#include <stdio.h>
#include<stdlib.h>
int merge_arrays(int arr1[], int arr2[], int arr3[], int m, int n)
{
int i,j;
for(i = 0; i < m; i++)
{
arr3[i] = arr1[i];
}
for(i = m, j = 0 ; i < m + n; i++, j++)
{
arr3[i] = arr2[j];
}
}
int main()
{
int n,m;
printf("\nEnter the size of Array 1 : ");
scanf("%d",&m);
printf("\nEnter the size of Array 2 : ");
scanf("%d",&n);
int arr1[m],arr2[n];
int arr3[m+n];
int i;
printf("\nInput the Array 1 elements : ");
for(i = 0; i<m;i++)
{
scanf("%d",&arr1[i]);
}
printf("\nInput the Array 2 elements : ");
for(i = 0;i<n;i++)
{
scanf("%d",&arr2[i]);
}
merge_arrays(arr1,arr2,arr3,m,n);
printf("\nThe Merged Sorted Array : ");
for(i = 0; i < m+n-1; i++)
{
for(int j = 0; j < m+n-i-1; j++)
{
if(arr3[j] > arr3[j + 1])
{
int temp = arr3[j];
arr3[j ] = arr3[j + 1];
arr3[j + 1] = temp;
}
}
}
for(i = 0; i < n + m; i++)
{
printf("%d ",arr3[i]);
}
printf("\n");
return 0;
}
