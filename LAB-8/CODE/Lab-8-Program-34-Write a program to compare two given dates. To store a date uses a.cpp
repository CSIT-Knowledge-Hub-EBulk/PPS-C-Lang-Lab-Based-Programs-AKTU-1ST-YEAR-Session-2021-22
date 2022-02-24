//Write a program to compare two given dates. To store a date uses a structure that contains three members namely day, month and year. If the dates are equal then display message equal otherwise unequal. 
#include<stdio.h>

struct data
{
    int day,month,year;
}d1,d2;

int main()
{
    printf("Enter first date\n");
    scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
    printf("Enter the second date\n");
    scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
    if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year)
     printf("Equal\n");
    else
     printf("Unequal");
    return 0;
}
