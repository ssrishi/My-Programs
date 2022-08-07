#include<stdio.h>
int main()
{
    int n, digit,result;
    printf("Enter a number and digit: ");
    scanf("%d %d",&n,&digit);
    result = digit_in_number(n,digit);
    if(result == 1)
        printf("Yes");
    else
        printf("No");
    printf("\n%d",result);
    return 0;
}
int digit_in_number(int n,int d)
{
    int i=0;
    while(n>0)
    {
        i= n%10;
        if(d==i)
            return 1;
        else
            n=n/10;
    }
    if(n==0)
        return 0;
}
