#include<stdio.h>
void uppercase(char[]);
int main()
{
    char str[30];
    uppercase(str);
    printf("%s",str);
    return 0;
}
void uppercase(char str[])
{
    int i;
    printf("Enter your string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=97 &&str[i]<=122)
            str[i]=str[i]-32;
    }
}