#include<stdio.h>
int n_sum(int);
int main()
{
    int n,total_sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    total_sum = n_sum(n);
    printf("%d ",total_sum);
    return 0;
}
int n_sum(int a)
{
    int sum;
    if(a==1)
        return 1;
    sum = a+n_sum(a-1);
    return sum;
}
