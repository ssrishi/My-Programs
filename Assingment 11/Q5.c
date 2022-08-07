#include<stdio.h>
void prime_numbers(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    prime_numbers(n);
    return 0;
}
void prime_numbers(int a)
{
    int i,j;
    for(i=2;a>0;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                if(j==i)
                {
                    printf("%d ",i);
                    a--;
                }
                else
                    break;
            }
        }
    }
}
