#include<stdio.h>
int odd_natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    odd_natural(n);
    return 0;
}
int odd_natural(int a)
{
    if(a==1)
    {
        printf("%d ",a);
        return 0;
    }
    odd_natural(a-1);
    printf("%d ",2*a-1);
}
