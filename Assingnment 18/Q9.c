#include<stdio.h>
#include<string.h>
void reverse_string(char []);
int main()
{
    int i;
    char str[30];
    printf("Enter your string: ");
    fgets(str,30,stdin);
    reverse_string(str);
    printf("%s",str);
}
void reverse_string(char str[])
{
    int i,j,k=0,x;
    char temp;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ' || str[i] =='\n')
        {
            for(j=k,x=i-1;j<x;j++,x--)
            {
                temp = str[j];
                str[j] = str[x];
                str[x] = temp;
            }
            k=i+1;
        }
    }
    strrev(str);
}
