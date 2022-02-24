//Write a program in C to check whether the given string is a palindrome or not.
//Using Recursion
#include <stdio.h>
 #include <string.h>
 
 
int checkpalindrome(char *s)
{
    static int i,c=0,n=strlen(s);
    if(i<n/2)
    {
         if(s[i]==s[n-i-1])
    	c++;
    	i++;
    	checkpalindrome(s);
	}
	else
	{
		if(c==i)
        return 1;
        else
        return 0;
	}
 	 
 	
}
int main()
{
    char s[1000];  
   
    printf("Enter  the string: ");
    gets(s);
    
 
    if(checkpalindrome(s))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
 
 }
