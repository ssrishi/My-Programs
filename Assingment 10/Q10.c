#include<stdio.h>
void prime_factors(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime_factors(n);
    return 0;
}
void prime_factors(int n)
{
    int i=2;
    while(n>1)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            n=n/i;
        }
        else
            i++;
    }
}
