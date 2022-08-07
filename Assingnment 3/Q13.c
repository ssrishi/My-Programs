#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n%3==0 && n%2==0)
        printf("Number is divisible");
    else
        printf("Number is not divisible");
    return 0;
}
