#include<stdio.h>
int digit_count(int);
int main()
{
    int n,count;
    printf("Enter a number: ");
    scanf("%d",&n);
    count = digit_count(n);
    printf("%d",count);
    return 0;
}
int digit_count(int a)
{
    int count;
    if(a>0)
    {
        count = digit_count(a/10);
        count++;
        return count;
    }
    return 0;
}

