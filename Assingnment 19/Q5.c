#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char str[10][20]={"abc1gmail.com","rishi@gmail.com","ssrishi17@gmail.com","ss12gmail.com","rishabhgmail.com","bharat@gmail.com"};
    for(i=0;i<6;i++)
    {
        if(strchr(str[i],'@')==0)
            printf("%s\n",str[i]);
    }
    return 0;
}