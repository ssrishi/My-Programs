#include<stdio.h>
int word_count(char[]);
int main()
{
    int count;
    char str[30];
    printf("Enter your string: ");
    fgets(str,30,stdin);
    count = word_count(str);
    printf("Total words in string is %d",count);
    return 0;
}
int word_count(char str[])
{
    int i,count=0;
    for(i=0;str[i];i++)
    {
        if(str[i]==' ' || str[i]=='\n')
        {
            if(str[i+1] !=' ')
                count++;
        }
    }
    return count;
}