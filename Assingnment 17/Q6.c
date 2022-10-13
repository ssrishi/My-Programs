#include<stdio.h>
int main()
{
    int i,j,temp,k;
    char str[30];
    printf("Enter your string: ");
    fgets(str,30,stdin);
    for(i=0;str[i]!='\n';i++);
    k=i-1;
    for(j=0,i=i-1;j<=k/2;i--,j++)
    {
        temp=str[j];
        str[j]=str[i];
        str[i]=temp;
    }
    printf("\n");
    printf("reverse string is %s",str);
    return 0;
}