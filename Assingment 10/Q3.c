#include<stdio.h>
int check_even_odd(int);
int main()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    result = check_even_odd(n);
    printf("%d",result);
    return 0;
}
int check_even_odd(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}
