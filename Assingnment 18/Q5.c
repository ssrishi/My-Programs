#include<stdio.h>
void lowercase(char[]);
int main()
{
    char str[30];
    lowercase(str);
    printf("%s",str);
    return 0;
}
void lowercase(char str[])
{
    int i;
    printf("Enter your string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65 &&str[i]<=90)
            str[i]=str[i]+32;
    }
}