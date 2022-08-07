#include<stdio.h>
#include<conio.h>
int main()
{
    int number, digit;
    printf("Enter a number : ");
    scanf("%d",&number);
    printf("Enter a digit : ");
    scanf("%d",&digit);
    number = number*10 + digit;
    printf("New value of number is %d",number);
    return 0;
}
