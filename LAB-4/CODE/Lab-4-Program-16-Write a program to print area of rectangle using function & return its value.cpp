//Write a program to print area of rectangle using function & return its value to main function.
#include<stdio.h>

// function for calculating the area of rectangle

int Area(int l,int b)
{
    int a;
    a=l*b;
    return a;
}

//Driver function
int main()
{
  
  int length,breath,A;
  printf("Enter length and breath of the Rectangle\n");
  scanf("%d%d",&length,&breath);
  A=Area(length,breath);  // function calculating
  printf("Area of the Rectangle is: %d",A);
    return 0;    
}
