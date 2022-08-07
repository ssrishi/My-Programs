#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter a number a=");
    scanf("%d",&a);
    printf("Enter a number b=");
    scanf("%d",&b);
    if(a>b)
        printf("a=%d is greater",a);
    if(b>a)
        printf("b=%d is greater",b);
    if(b==a)
        printf("both are same %d",a);
    return 0;
}
