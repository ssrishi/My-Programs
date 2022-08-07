#include<stdio.h>
void prime_numbers(int,int);
int main()
{
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);
    prime_numbers(n,m);
    return 0;
}
void prime_numbers(int a, int b)
{
    int i,j;
    for(i=a>b?b:a;i<(a<b?b:a);i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
            printf("%d ",i);
    }
}
