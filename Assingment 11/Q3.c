#include<stdio.h>
int main()
{
    int n,result;
    printf("Enter a number: ");
    scanf("%d",&n);
    result = prime_number(n);
    if(result==1)
        printf("%d is  prime number.",n);
    else
        printf("%d is  not prime number.",n);
    return 0;
}
int prime_number(int a)
{
    int i;
    for(i=2;i<a;i--)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
