#include<stdio.h>
#include<conio.h>
int main()
{
    int n, i;
    printf("Enter a three number : ");
    scanf("%d",&n);
    i = n%10;
    n = n/10;
    i = i*100 + n;
    printf("Number after rotation is %d",i);
    return 0;
}
