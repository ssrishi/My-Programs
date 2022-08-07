#include<stdio.h>
int facto(int);
int main()
{
    int n,fact;
    printf("Enter a number: ");
    scanf("%d",&n);
    fact = facto(n);
    printf("%d",fact);
    return 0;
}
int facto(int a)
{
    int fact;
    if(a>=1)
    {
        fact = a * facto(a-1);
        return fact;
    }
    return 1;
}
