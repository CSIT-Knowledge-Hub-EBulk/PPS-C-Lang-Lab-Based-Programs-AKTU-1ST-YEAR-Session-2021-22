//Write a program to remove all the blank space from the string & print it, also count the no of characters. 
#include<stdio.h>
#include<string.h>
int main()
{
    char string[50],newS[50];
    int i,count,j=0;
    printf("Enter a string\n");
    scanf("%[^\n]",string);
    for(i=0;string[i];i++)
    {
        if(string[i]!=' ')
        {
            newS[j]=string[i];
            j++;
        }
    }
    newS[j]='\0';  // It is important to put null at 
                  // the end of string
    strcpy(string,newS); // copy new string into prev
    printf("The new string is : %s",string);
    count=strlen(string);
    printf("\nThe number of character in the new string is %d",count);
    return 0;
}
