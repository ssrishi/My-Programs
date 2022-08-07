#include<stdio.h>
int deci_to_oct(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    deci_to_oct(n);
}
int deci_to_oct(int a)
{
    if(a==0)
    {
        return 0;
    }
    deci_to_oct(a/8);
    printf("%d",a%8);
}

