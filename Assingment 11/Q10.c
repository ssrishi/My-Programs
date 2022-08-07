#include<stdio.h>
int fact(int);
int main()
{
    int sum =0,i;
    for(i=1;i<=5;i++)
        sum= sum + (fact(i)/i);
    printf("%d",sum);
    return 0;

}
int fact(int n)
{
    int i,fact=1;
    for(i=n;i>0;i--)
        fact*=i;
    return fact;
}
