#include<stdio.h>
int length(char[]);
int main()
{
    int len;
    char str[30];
    len=length(str);
    printf("%d",len);
    return 0;
}
int length(char str[])
{
    int i;
    printf("Enter your string: ");
    fgets(str,30,stdin);
    for(i=0;str[i]!='\n';i++);
    return i;
}