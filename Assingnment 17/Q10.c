#include<stdio.h>
int main()
{
    char str[30];
    int i,j,x,y,temp=0,count=1;
    printf("Enter your string: ");
    fgets(str,30,stdin);
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
    for(x=0;str[x]!='\n';)
    {
        for(y=0;str[y]!='\n';y++)
        {
            if(x!=y)
            {
                if(str[y]>=65 && str[y]<=90)
                {
                    if(str[x]==str[y]+32)
                        count++;
                }
                else if(str[x]>=65 && str[y]<=90)
                {
                    if(str[x]+32==str[y])
                        count++;
                }
                else
                {
                    if(str[x]==str[y])
                        count++;
                }
            }
        }
        printf("Frequency of %c character is %d\n",str[x],count);
        x+=count;
        count=1;
    }
    return 0;
}
