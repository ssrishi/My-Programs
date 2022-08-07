#include<stdio.h>
int odd_sum(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = odd_sum(n);
    printf("%d",sum);
    return 0;
}
int odd_sum(int a)
{
    int sum;
    if(a==1)
        return 1;
    sum = 2*a-1 + odd_sum(a-1);
    return sum;
}
