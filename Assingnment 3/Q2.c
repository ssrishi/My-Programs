#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    if (n%5==0 )
        printf("%d is divisible by 5.",n);
    else
        printf("%d is not divisible by 5.",n);
    return 0;
}
