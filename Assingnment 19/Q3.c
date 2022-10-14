#include<stdio.h>
int main()
{
    int i;
    char str[5][20];
    printf("Enter 5 stings: ");
    for ( i = 0; i < 5; i++)
    {
        fgets(str[i],20,stdin);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%s",str[i]);
    }
    return 0;   
}