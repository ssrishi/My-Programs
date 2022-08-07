#include<stdio.h>
#include<conio.h>
int main()
{
    int a, b, c;
    printf("Enter first numbers a=");
    scanf("%d",&a);
    printf("Enter second numbers b=");
    scanf("%d",&b);
    c = a;
    a = b;
    b = c;
    printf("Numbers after swaping a=%d, b=%d",a,b);
    return 0;
}
