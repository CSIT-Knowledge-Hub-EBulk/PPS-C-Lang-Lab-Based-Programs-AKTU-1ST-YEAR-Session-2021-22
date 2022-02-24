/*Write a c program to copy & count the character content of one file says 
a.txt to another file b.txt. */
#include<stdio.h>
FILE *fp,*ft;

int main()
{
    int count=0;
    char ch;
    fp=fopen("a.txt","r");
    ft=fopen("b.txt","w");
    if(fp==NULL || ft==NULL)
      printf("File is unable to open\n");
    else
    {
        while((ch=fgetc(fp))!=EOF)
        {
            fputc(ch,ft);
            count++;
        }
    }
    // It is important to close the file after operation
    fclose(fp);
    fclose(ft);
    printf("The number of character is : %d",count);
    return 0;
}
