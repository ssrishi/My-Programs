#include<stdio.h>
int main()
{
    int i,j,temp;
    char str[30];
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
    printf("\n%s",str);
    return 0;
}