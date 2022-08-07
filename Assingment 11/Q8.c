#include<stdio.h>
int fact(int);
int comb(int,int);
void pascal(int);
int main()
{
    pascal(10);
    return 0;
}
int fact(int n)
{
    int i,fact=1;
    for(i=n;i>0;i--)
        fact*=i;
    return fact;
}
int comb(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
void pascal(int n)
{
    int i,j;
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d  ",comb(i,j));
        printf("\n");
    }
}
