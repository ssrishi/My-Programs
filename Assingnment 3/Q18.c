#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n==2)
        printf("28 Days");
    else if (n<8 && n%2!=0)
        printf("31 Days");
    else if (n>=8 && n<=12 && n%2==0)
        printf("31 Days");
    else if (n<8 && n%2==0)
        printf("30 Days");
    else if (n>=8 && n<=12 && n%2!=0)
        printf("30 Days");
    else
        printf("Invalid Month");
}
