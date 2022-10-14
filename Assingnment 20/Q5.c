#include<stdio.h>
int grtst_num(int *,int *);
int main()
{
    int a=10,b=20,grtst;
    grtst=grtst_num(&a,&b);
    if(grtst==1)
        printf("a is greastest number");
    else
        printf("b is greastest number");
    return 0;
}
int grtst_num(int *p,int *q)
{
    if(*p>*q)
        return 1;
    else
        return 0;
}
