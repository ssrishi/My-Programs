#include<stdio.h>
int square(int);
int main()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("%d",square(n));
    return 0;
}
int square(int a)
{
    return a*a;
}
