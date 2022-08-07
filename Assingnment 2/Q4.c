#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b;
    printf("Enter first numbers a=");
    scanf("%d",&a);
    printf("Enter second numbers b=");
    scanf("%d",&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Numbers after swaping a=%d, b=%d",a,b);
    return 0;
}
