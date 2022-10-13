#include<stdio.h>
int alphanumeric(char[]);
int main()
{
    char str[30];
    alphanumeric(str);
    return 0;
}
int alphanumeric(char str[])
{
    int i;
    printf("Enter your string: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65 &&str[i]<=90 || str[i]>=97 &&str[i]<=122 && str[i]>=48 && str[i]<=57)
        {
            printf("String is alphanumberic string");
            return 0;
        }
    }
    printf("String is not alphanumberic string");
}