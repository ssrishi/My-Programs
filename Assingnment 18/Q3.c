#include<stdio.h>
int compare(char[],char[]);
int main()
{
    int i;
    char str[30],str2[30];
    fgets(str,30,stdin);
    fflush(stdin);
    fgets(str2,30,stdin);
    i=compare(str,str2);
    if(i==0)
        printf("Strings are equal.");
    else if(i>1)
        printf("String are not in dictionary order.");
    else
        printf("String are in dictionary order.");
    return 0;
}
int compare(char str[],char str2[])
{
    int i,cmp=0;
    for(i=0;i<strlen(str),i<strlen(str2);i++)
    {
        if(str[i]>str2[i])
            return 1;
        else if(str[i]<str2[i])
            return -1;
    }
    return 0;
}
