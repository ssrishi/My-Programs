#include<stdio.h>
#include<string.h>
void reverse(char[]);
int main()
{
    char str[30];
    reverse(str);
    printf("%s",str);
    return 0;
}
void reverse(char str[])
{
    int i,len,j,temp;
    printf("Entrter your string: ");
    fgets(str,30,stdin);
    len=strlen(str)-1;
    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
}