#include<stdio.h>
int LCM(int,int);
int main()
{
    int n,m,lcm;
    printf("Enter two number: ");
    scanf("%d %d",&n,&m);
    lcm = LCM(n,m);
    printf("LCM of %d and %d is %d",n,m,lcm);
    return 0;
}
int LCM(int a, int b)
{
    int i;
    for(i=a>b?a:b;i<=(a*b);i++)
    {
        if(i%a==0 && i%b==0)
            return i;
    }
}
