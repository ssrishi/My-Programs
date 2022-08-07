#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i<=n*10;i+=n)
        printf("%d\n",i);
    return 0;
}

