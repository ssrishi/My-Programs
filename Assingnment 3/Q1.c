#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d" ,&n);
    if (n>0)
        printf("%d is positive.",n);
    else
        printf("%d is non-positive.",n);
    return 0;
}
