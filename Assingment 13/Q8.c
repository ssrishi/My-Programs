#include<stdio.h>
int fab_series(int,int,int);
int main()
{
    int n=-1,m=1,num;
    printf("Enter a number to print of fabonacci series: ");
    scanf("%d",&num);
    fab_series(n,m,num);
    return 0;
}
int fab_series(int a,int b,int n)
{
    int c;
    c = a+b;
    if(n>=1)
    {
        printf("%d ",c);
        a=b;
        b=c;
        fab_series(a,b,n-1);
    }
    return 0;
}
