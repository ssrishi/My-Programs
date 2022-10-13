#include<stdio.h>
int main()
{
    int i,j,count=0;
    char str[30],vov[10]={"aeiouAEIOU"};
    printf("Enter your name: ");
    fgets(str,30,stdin);
    for(i=0;str[i];i++)
    {
        for(j=0;j<10;j++)
        {
            if(str[i]==vov[j])
                count++;
        }
    }
    printf("Vowels in the string is %d",count);
    return 0;
}