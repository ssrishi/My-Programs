#include<stdio.h>
void print_odd_natural_number(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    print_odd_natural_number(n);
    return 0;
}
void print_odd_natural_number(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf("%d ",2*i-1);
}
