#include<stdio.h>
int squares(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    squares(n);
    return 0;
}
int squares(int a)
{
    if(a==1)
    {
        printf("%d ",a*a);
        return 0;
    }
    squares(a-1);
    printf("%d ",a*a);
}
