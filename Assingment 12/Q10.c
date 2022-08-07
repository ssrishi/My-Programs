#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
int reverse(int a)
{
    if(a/10>=1)
    {
        printf("%d",a%10);
        reverse(a/10);
        return 0;
    }
    printf("%d",a%10);
}
