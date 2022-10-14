#include<stdio.h>
int main()
{
    int i,j,k,count=0,n,m;
    char str[5][20],vow[]={"aeiouAEIOU"};
    for(i=0;i<5;i++)
    {   
        printf("Enter string: ");
        fgets(str[i],20,stdin);
    }
    printf("\n");
    for(i=0;i<=4;i++)
    {
        for(j=0;str[i][j]!='\n';j++)
        {
            for(k=0;k<=9;k++)
            {
                if(str[i][j]==vow[k])
                    count++;
            }
        }
        printf("string %d has %d vowels\n",i+1,count);
        count=0;
    }
}