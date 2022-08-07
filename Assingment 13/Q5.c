#include<stdio.h>
int digit_sum(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = digit_sum(n);
    printf("%d",sum);
    return 0;
}
int digit_sum(int a)
{
    int sum;
    if(a/10==0)
        return a%10;
    sum = a%10 + digit_sum(a/10);
    return sum;
}
