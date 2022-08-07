#include<stdio.h>
int even_natural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    even_natural(n);
    return 0;
}
int even_natural(int a)
{
    if(a>=1)
    {
        printf("%d ",2*a);
        even_natural(a-1);
    }
    return 0;
}

