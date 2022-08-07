#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i,sum=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i=n;i>0;i--)
       sum*=i;
    printf("%d",sum);
}
