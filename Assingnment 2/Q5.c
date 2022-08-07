#include<stdio.h>
#include<conio.h>
int main()
{
    int n, sum=0;
    printf("Enter three digit number: ");
    scanf("%d",&n);
    sum += n%10;
    n    = n/10;
    sum += n%10;
    n    = n/10;
    sum += n%10;
    n    = n/10;
    printf("Sum of the digits is %d",sum);
    return 0;
}
