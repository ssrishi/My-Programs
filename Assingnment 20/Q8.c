#include<stdio.h>
int sum_array(int *,int);
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},sum;
    sum = sum_array(a,10);
    printf("Sum of aaray = %d",sum);
    return 0;
}
int sum_array(int *p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
        sum+=*(p+i);
    return sum;
}