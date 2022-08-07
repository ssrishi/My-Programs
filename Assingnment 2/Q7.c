#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    a = a&&1;
    printf("%d",a%10);
    return 0;
}
