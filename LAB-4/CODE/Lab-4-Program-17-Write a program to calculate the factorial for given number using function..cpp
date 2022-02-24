//Write a program to calculate the factorial for given number using function. 
#include<stdio.h>  
  
void factorial(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive number to find Factorial\n");  
    scanf("%d", &num);  
  
    factorial(num);  
  
    return 0;  
}  
  
void factorial(int num)  
{  
    int count, fact = 1;  
  
    if(num == 0)  
    {  
        printf("Factorial of 0 is 1 (!0 = 1)\n");  
    }  
    else  
    {  
        for(count = 1; count <= num; count++)  
        {  
            fact = fact * count;  
        }  
  
        printf("\nFactorial of %d is %d (!%d = %d)\n", num, fact, num, fact);  
    }  
}  
