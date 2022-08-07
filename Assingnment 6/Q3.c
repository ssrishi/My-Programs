#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n*2;i++)
    {
        if (i%2!=0)
            sum+=i;
    }
    printf("%d",sum);
}

