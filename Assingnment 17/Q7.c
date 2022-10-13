#include<stdio.h>
int main()
{
    int i,count_a=0,count_d=0,count_sc=0;
    char str[30];
    printf("Enter you string: ");
    fgets(str,30,stdin);
    for(i=0;str[i]!='\n';i++)
    {
        if(str[i]>=65 && str[i]<=90 || str[i]>=97 && str[i]<=122)
            count_a++;
        else if(str[i]>=48 && str[i]<=57)
            count_d++;
        else
            count_sc++;
    }
    printf("alphabet in strings are: %d\n",count_a);
    printf("digits in strings are: %d\n",count_d);
    printf("special character in strings are: %d",count_sc);
    return 0;
}