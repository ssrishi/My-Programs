#include<stdio.h>
int deci_to_bnry(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    deci_to_bnry(n);
}
int deci_to_bnry(int a)
{
    if(a==0)
    {
        return 0;
    }
    deci_to_bnry(a/2);
    printf("%d",a%2);
}
