//Write a program to generate sum of series 1!+2!+3!+--------------n! 
#include<stdio.h>
int main()
{
	int num,i,j,fact,sum=0;//variables
	printf("Enter the last number of series:\n");
	scanf("%d",&num);//last number of series
	for(i=1;i<=num;i++)//loop for finding factorial and sum
	{
		fact=1;
		if(i!=num)
			printf("%d!+ ",i);
		else
			printf("%d!= ",i);
		for(j=1;j<=i;j++)
			fact=fact*j;
		sum=sum+fact;
	}
	printf("%d",sum);
	return 0;
}
