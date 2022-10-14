#include<stdio.h>
void print_array(int *,int);
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    print_array(a,10);
    return 0;
}
void print_array(int *p,int size)
{
    int i,sum=0;
    for(i=size-1;i>=0;i--)
        printf("%d ",*(p+i));
}