#include<stdio.h>
//Write program to sort the array of character (String) in alphabetical order like STRING in GINRST.
#include<string.h>
int main()
{
    int i,x,j,k=0,len;
    char string[50],alpha[50];
    printf("Enter a string\n");
    scanf("%[^\n]",string);
    len=strlen(string);
    x=65;
    while(x<=90 && k<len)
    {
        for(i=0;string[i];i++)
        {
            j=string[i];
            if(j==x || j==x+32)
            {
                alpha[k]=string[i];
                k++;
            }
        }
        x++;
    }
    alpha[k]='\0';
    printf("New string is:\t%s",alpha);
    return 0;
}
