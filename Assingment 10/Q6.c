#include<stdio.h>
int find_factorial(int);
int main()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    result = find_factorial(n);
    printf("%d",result);
    return 0;
}
int find_factorial(int n)
{
    int factorial=1, i;
    for(i=n;i>=1;i--)
        factorial*=i;
    return factorial;
}
