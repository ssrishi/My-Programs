#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        sum+=i;
    printf("%d",sum);
}
