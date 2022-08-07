#include<stdio.h>
int square_sum(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = square_sum(n);
    printf("%d",sum);
    return 0;
}
int square_sum(int a)
{
    int sum;
    if(a==1)
        return a*a;
    sum = a*a + square_sum(a-1);
    return sum;
}
