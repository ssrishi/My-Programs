#include<stdio.h>
int HCF(int,int,int);
int main()
{
    int n,m,hcf,i;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);
    i=n>m?m:n;
    hcf = HCF(n,m,i);
    printf("%d",hcf);
    return 0;
}
int HCF(int a,int b,int i)
{
    int hcf;
    if(a%i==0 && b%i==0)
        return i;
    hcf = HCF(a,b,i-1);
    return hcf;
}
