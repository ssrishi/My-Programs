#include<stdio.h>
int main()
{
    int i,count=0;
    char str[20],c;
    printf("Enter your name: ");
    fgets(str,20,stdin);
    printf("Enter charcter to find his occurrence: ");
    scanf("%c",&c);
    for(i=0;str[i];i++)
    {
        if(str[i]==c)
            count++;
    }
    printf("Occurrence of given charcter in a string is %d",count);
    return 0;
}