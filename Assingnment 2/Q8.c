#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if (n & 1 ==1)
        printf("%d is Odd",n);
    else
        printf("%d is Even",n);
    return 0;
}
