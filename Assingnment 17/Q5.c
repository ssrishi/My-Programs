#include<stdio.h>
int main()
{
    int i;
    char str[30];
    printf("Enter your name: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        if(str[i]>=65 && str[i]<=90)
            str[i]=str[i]+32;
    }
    printf("%s",str);
    return 0;
}