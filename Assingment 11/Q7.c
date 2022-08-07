#include<stdio.h>
void fibonacci_series(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fibonacci_series(n);
    return 0;
}
void fibonacci_series(int n)
{
    int a=-1,b=1,c,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}
