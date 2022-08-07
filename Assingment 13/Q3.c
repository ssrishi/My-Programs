#include<stdio.h>
int even_sum(int);
int main()
{
    int n,sum;
    printf("Enter a number: ");
    scanf("%d",&n);
    sum = even_sum(n);
    printf("%d",sum);
    return 0;
}
int even_sum(int a)
{
    int sum;
    if(a==1)
        return 2*a;
    sum = 2*a + even_sum(a-1);
    return sum;
}
