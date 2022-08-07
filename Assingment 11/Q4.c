#include<stdio.h>
int next_prime(int);
int main()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    result = next_prime(n);
    printf("%d",result);
    return 0;
}
int next_prime(int n)
{
    int i,j;
    for(i=n+1;;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i)
            return i;
    }
}
