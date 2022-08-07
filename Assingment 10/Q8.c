#include<stdio.h>
int find_permutation(int,int);
int fact(int);
int main()
{
    int n,r,result;
    printf("Enter n items and r time: ");
    scanf("%d %d",&n,&r);
    result = find_permutation(n,r);
    printf("%d",result);
    return 0;
}
int find_permutation(int n,int r)
{
    return (fact(n)/fact(n-r));
}
int fact(int a)
{
    int i,fact=1;
    for(i=a;i>0;i--)
        fact*=i;
    return fact;
}
