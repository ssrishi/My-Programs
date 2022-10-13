#include<stdio.h>
#include<string.h>
void palindrome(char[],char[]);
void reverse(char[]);
int main()
{
    char str[30],str2[30];
    printf("Enter your string: ");
    fgets(str,30,stdin);
    strcpy(str2,str);
    reverse(str);
    palindrome(str,str2);
    return 0;
}
void palindrome(char str[],char str2[])
{
    int i;
    i=strcmp(str,str2);
    if(i==0)
        printf("String is palindrome");
    else
        printf("string is not palindrone");
}
void reverse(char str[])
{
    int i,len=0,j,temp;
    len=strlen(str)-1;
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}