#include<stdio.h>
void sorting(char[]);
void find_repeated_character(char[]);
int main()
{
    int i;
    char str[30];
    printf("Enter your string: ");
    fgets(str,30,stdin);
    sorting(str);
    find_repeated_character(str);
    return 0;
}
void sorting(char str[])
{
    int i,j,temp=0;
    for(i=0;str[i]!='\n';i++)
    {
        for(j=i+1;str[j]!='\n';j++)
        {
            if(str[j]>=65 && str[j]<=90)
            {
                if(str[i]>str[j]+32)
                { 
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
            }
            else if(str[i]>=65 && str[i]<=90)
            {
                if(str[i]+32>=str[j])
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }                
            }
            else 
            {   
                if(str[i]>str[j])
                {
                    temp = str[i];
                    str[i] = str[j];
                    str[j] = temp;
                }
           }
        }
    }
}
void find_repeated_character(char str[])
{
    int i,j,count=1;
    for(i=0;str[i]!='\n';)
    {
        for(j=0;str[j]!='\n';j++)
        {
            if(i!=j)
            {
                if(str[i]==str[j] || str[i]+32==str[j] || str[i]==str[j]+32)
                {
                    count++;
                }
            }
        }
        if(count>1)
            printf("Repeated character in the string is %c\n",str[i]);
        i+=count;
        count=1;
    }
}