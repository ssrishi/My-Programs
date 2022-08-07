#include<stdio.h>
int HCF(int,int);
int main()
{
    int n,m,hcf;
    printf("Enter two number: ");
    scanf("%d %d",&n,&m);
    hcf = HCF(n,m);
    printf("HCF of %d and %d is %d",n,m,hcf);
    return 0;
}
int HCF(int a,int b)
{
    int i;
    for(i=(a>b?a:b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
            return i;
    }
}


