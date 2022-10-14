#include<stdio.h>
void sort(int *,int );
int main()
{
    int a[10]={10,9,8,7,6,5,4,3,2,1},i;
    sort(a,10);
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void sort(int *p,int size)
{
    int i,j,t;
    for(i=0;i<size-1;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}