#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[5][20]={"pune\n","hyderabad\n","delhi\n","agra\n","Noida\n"},temp[20];
    printf("Enter string you want to search: ");
    fgets(temp,20,stdin);
    for(i=0;i<5;i++)
    {
        if(strcmp(str[i],temp)==0)
        {
            printf("String is in list");
            return 0;        
        }
    }
    printf("%s",temp);
    printf("String is not in list");
     for(i=0;i<5;i++)
        printf("\n%s",str[i]);
    return 0;

}