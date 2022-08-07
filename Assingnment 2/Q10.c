#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    x /= 10;
    x *= 10;
    printf("New value of x is %d",x);
    return 0;
}
