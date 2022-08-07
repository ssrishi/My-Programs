#include<stdio.h>
int natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    natural(n);
    return 0;
}
int natural(int n)
{
    if(n==1)
    {
        printf("%d ",n);
        return 0;
    }
    natural(n-1);
    printf("%d ",n);
}
