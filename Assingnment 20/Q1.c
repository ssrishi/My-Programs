#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("a=%d\nb=%d",a,b);
    return 0;
}
int swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    return 0;
}