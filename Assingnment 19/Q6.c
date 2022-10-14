#include<stdio.h>
#include<strings.h>
int main()
{
    int i;
    char s[10][20],str[10][20];
    printf("enter string:");
    for(i=0;i<10;i++)
    {
        gets(s[i]);
    }
    for(i=0;i<10;i++)
    {
        strcpy(str[i],s[i]);
        strrev(s[i]);
    } 
    for(i=0;i<10;i++)
    {
        if(strcmp(s[i],str[i])==0)
            printf("%s\n",s[i]);
    }
    return 0;
}